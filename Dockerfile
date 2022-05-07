FROM ubuntu AS build-env
WORKDIR /work

RUN apt-get update && apt-get install -y \
    gawk m4 libwxgtk3.0-gtk3-dev libx11-dev libxi-dev \
    libpcre3-dev libxerces-c-dev libspdlog-dev libuchardet-dev \
    libssh-dev libssl-dev libsmbclient-dev libnfs-dev libneon27-dev \
    libarchive-dev cmake g++ git && \
    rm -rf /var/lib/apt/lists/*

COPY . .
RUN mkdir -p _build
WORKDIR _build

RUN cmake -DUSEWX=yes -DCMAKE_BUILD_TYPE=Release ..
RUN make -j$(nproc --all)
RUN make install

FROM ubuntu
WORKDIR /usr/local

RUN apt-get update && apt-get install -y \
    # x11-apps \
    libwxgtk3.0-gtk3 \
    libxerces-c3.2 \
    libx11-6 \
    libxi6 \
    libpcre3 \
    libspdlog1 \
    libuchardet0 \
    # libssh \
    # libssl \
    libsmbclient \
    # libnfs \
    libneon27 \
    libarchive13 \
    && rm -rf /var/lib/apt/lists/*

COPY --from=build-env /usr/local/bin/far2l ./bin/
COPY --from=build-env /usr/local/lib/far2l ./lib/far2l
COPY --from=build-env /usr/local/share/far2l ./share/far2l
COPY --from=build-env /usr/local/share/icons ./share/icons
COPY --from=build-env /usr/local/share/applications ./share/applications

CMD ["/usr/local/bin/far2l"]

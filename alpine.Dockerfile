FROM alpine AS build-env
WORKDIR /work

RUN apk upgrade --update-cache --available && apk add \
    gawk \
    m4 \
    # wxgtk3-dev \
    wxgtk-dev \
    linux-headers \
    musl-dev \
    libx11-dev \
    libxi-dev \
    pcre-dev \
    xerces-c-dev \
    spdlog-dev \
    uchardet-dev \
    libexecinfo-dev \
    libssh-dev \
    libressl-dev \
    libsmbclient \
    libnfs-dev \
    neon-dev \
    libarchive-dev \
    alpine-sdk \
    # build-base \
    uchardet-static \
    libexecinfo-static \
    cmake \
    g++ \
    git \
    && rm -rf /var/cache/apk/*

COPY . .
RUN mkdir -p _build
WORKDIR _build

RUN cmake -DCMAKE_CXX_FLAGS="-D__MUSL__" -DUSEWX=yes -DCMAKE_BUILD_TYPE=Release .. -DCMAKE_EXE_LINKER_FLAGS=-"l:libuchardet.a -static-libstdc++ -static-libgcc"
RUN make -j$(nproc --all)
RUN make install

FROM alpine
WORKDIR /usr/local

RUN apk upgrade --update-cache --available && apk add \
    # xorg-x11-apps \
    # gtk+3.0 \
    wxgtk \
    xerces-c \
    # libx11 \
    libxi \
    pcre \
    spdlog \
    uchardet \
    # libssh \
    # libssl \
    libsmbclient \
    # libnfs \
    neon \
    libarchive \
    terminus-font \
    # ttf-freefont \
    && rm -rf /var/lib/apt/lists/*

COPY --from=build-env /usr/local/bin/far2l ./bin/
COPY --from=build-env /usr/local/lib/far2l ./lib/far2l
COPY --from=build-env /usr/local/share/far2l ./share/far2l
COPY --from=build-env /usr/local/share/icons ./share/icons
COPY --from=build-env /usr/local/share/applications ./share/applications

CMD ["/usr/local/bin/far2l"]

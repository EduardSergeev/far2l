#pragma once

enum LanguageID
{
  MTitle,
  MDescription,
  MOK,
  MCancel,
  MRetry,
  MSkip,
  MRememberChoice,

  MLoginAuthTitle,
  MLoginAuthRetryTitle,
  MLoginAuthTo,
  MLoginAuthRetryTo,

  MProtocol,
  MHost,
  MPort,
  MLoginMode,
  MPasswordModeNoPassword,
  MPasswordModeAskPassword,
  MPasswordModeSavedPassword,
  MUserName,
  MPassword,
  MDirectory,
  MDisplayName,
  MAdvancedOptions,
  MSave,
  MConnect,

  MEditHost,

  MXferCopyDownloadTitle,
  MXferCopyUploadTitle,
  MXferCopyCrossloadTitle,
  MXferMoveDownloadTitle,
  MXferMoveUploadTitle,
  MXferMoveCrossloadTitle,

  MXferCopyDownloadText,
  MXferCopyUploadText,
  MXferCopyCrossloadText,
  MXferMoveDownloadText,
  MXferMoveUploadText,
  MXferMoveCrossloadText,

  MXferDOAText,

  MXferDOAAsk,
  MXferDOAOverwrite,

  MXferDOASkip,
  MXferDOAOverwriteIfNewer,

  MXferDOAResume,
  MXferDOACreateDifferentName,

  MXferConfirmOverwriteNotify,

  MXferCurrentFile,
  MXferFileSize,
  MXferAllSize,
  MXferCount,
  MXferOf,

  MXferFileTimeSpent,
  MXferRemain,
  MXferAllTimeSpent,
  MXferSpeedCurrent,
  MXferAverage, 

  MBackground,
  MPause,
  MResume,

  MProceedCopyDownload,
  MProceedCopyUpload,
  MProceedCopyCrossload,
  MProceedMoveDownload,
  MProceedMoveUpload,
  MProceedMoveCrossload,

  MDestinationExists,
  MSourceInfo,
  MDestinationInfo,
  MOverwriteOptions,

  MRemoveTitle,
  MRemoveText,
  MProceedRemoval,

  MRemoveSitesTitle,
  MRemoveSitesText,

  MMakeDirTitle,
  MMakeDirText,
  MProceedMakeDir,

  MConnectProgressTitle,
  MGetModeProgressTitle,
  MEnumDirProgressTitle,
  MCreateDirProgressTitle,

  MAbortTitle,
  MAbortText,
  MAbortConfirm,
  MAbortNotConfirm,

  MAbortingOperationTitle,
  MBreakConnection,

  MNotificationSuccess,
  MNotificationFailed,
  MNotificationUpload,
  MNotificationDownload,
  MNotificationCrossload,

  MErrorDownloadTitle,
  MErrorUploadTitle,
  MErrorCrossloadTitle,
  MErrorQueryInfoTitle,
  MErrorEnumDirTitle,
  MErrorMakeDirTitle,
  MErrorRmDirTitle,
  MErrorRmFileTitle,

  MErrorError,
  MErrorObject,
  MErrorSite,

  MHostLocalName,
  MErrorsStatus,

  MNewServerIdentityTitle,
  MNewServerIdentitySite,
  MNewServerIdentityText,

  MNewServerIdentityAllowOnce,
  MNewServerIdentityAllowAlways,

  MBackgroundTasksTitle,
  MBackgroundTasksMenuActive,
  MBackgroundTasksMenuPaused,
  MBackgroundTasksMenuComplete,
  MBackgroundTasksMenuAborted,

  MConfirmExitFARTitle,
  MConfirmExitFARText,
  MConfirmExitFARQuestion,
  MConfirmExitFARBackgroundTasks
};

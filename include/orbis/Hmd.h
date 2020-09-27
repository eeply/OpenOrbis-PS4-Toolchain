#ifndef _SCE_HMD_H_
#define _SCE_HMD_H_

#include <stdint.h>
#include <orbis/_types/hmd.h>

#ifdef __cplusplus 
extern "C" {
#endif

// Empty Comment
void sceHmdClose();
// Empty Comment
void sceHmdGet2DEyeOffset();
// Get Hmd device information
int sceHmdGetDeviceInformation(void *params);
// Empty Comment
void sceHmdGetDeviceInformationByHandle();
// Empty Comment
void sceHmdGetFieldOfView();
// Initialize Hmd
int sceHmdInitialize(void *params);
// Empty Comment
void sceHmdInternal3dAudioOpen();
// Empty Comment
void sceHmdInternalAnotherScreenClose();
// Empty Comment
void sceHmdInternalAnotherScreenGetAudioStatus();
// Empty Comment
void sceHmdInternalAnotherScreenGetFadeState();
// Empty Comment
void sceHmdInternalAnotherScreenGetVideoStatus();
// Empty Comment
void sceHmdInternalAnotherScreenOpen();
// Empty Comment
void sceHmdInternalAnotherScreenSendAudio();
// Empty Comment
void sceHmdInternalAnotherScreenSendVideo();
// Empty Comment
void sceHmdInternalAnotherScreenSetFadeAndSwitch();
// Empty Comment
void sceHmdInternalBindDeviceWithUserId();
// Empty Comment
void sceHmdInternalDfuCheckAfterPvt();
// Empty Comment
void sceHmdInternalDfuCheckPartialUpdateAvailable();
// Empty Comment
void sceHmdInternalDfuGetStatus();
// Empty Comment
void sceHmdInternalDfuOpen();
// Empty Comment
void sceHmdInternalDfuSetMode();
// Empty Comment
void sceHmdInternalGetHmuSerialNumber();
// Empty Comment
void sceHmdInternalGetPUSerialNumber();
// Empty Comment
void sceHmdInternalGetPUVersion();
// Empty Comment
void sceHmdInternalGetStatusReport();
// Empty Comment
void sceHmdInternalMirroringModeSetAspect();
// Empty Comment
void sceHmdInternalSeparateModeClose();
// Empty Comment
void sceHmdInternalSeparateModeGetAudioStatus();
// Empty Comment
void sceHmdInternalSeparateModeGetVideoStatus();
// Empty Comment
void sceHmdInternalSeparateModeOpen();
// Empty Comment
void sceHmdInternalSeparateModeSendAudio();
// Empty Comment
void sceHmdInternalSeparateModeSendVideo();
// Empty Comment
void sceHmdInternalSetBrightness();
// Empty Comment
void sceHmdInternalSetDeviceConnection();
// Empty Comment
void sceHmdInternalSetHmuPowerControl();
// Empty Comment
void sceHmdInternalSetIPD();
// Empty Comment
void sceHmdInternalSetPortConnection();
// Empty Comment
void sceHmdInternalSetPortStatus();
// Empty Comment
void sceHmdInternalSocialScreenGetFadeState();
// Empty Comment
void sceHmdInternalSocialScreenSetFadeAndSwitch();
// Empty Comment
void sceHmdInternalSocialScreenSetOutput();
// Open handle to Hmd
int sceHmdOpen(int userID, int type, int index, void *params);
// Empty Comment
void sceHmdReprojectionAddDisplayBuffer();
// Empty Comment
void sceHmdReprojectionClearUserEventEnd();
// Empty Comment
void sceHmdReprojectionClearUserEventStart();
// Empty Comment
void sceHmdReprojectionDebugGetLastInfo();
// Empty Comment
void sceHmdReprojectionFinalize();
// Empty Comment
void sceHmdReprojectionInitialize();
// Empty Comment
void sceHmdReprojectionQueryGarlicBuffAlign();
// Empty Comment
void sceHmdReprojectionQueryGarlicBuffSize();
// Empty Comment
void sceHmdReprojectionQueryOnionBuffAlign();
// Empty Comment
void sceHmdReprojectionQueryOnionBuffSize();
// Empty Comment
void sceHmdReprojectionSetCallback();
// Empty Comment
void sceHmdReprojectionSetDisplayBuffers();
// Empty Comment
void sceHmdReprojectionSetOutputMinColor();
// Empty Comment
void sceHmdReprojectionSetUserEventEnd();
// Empty Comment
void sceHmdReprojectionSetUserEventStart();
// Empty Comment
void sceHmdReprojectionStart();
// Empty Comment
void sceHmdReprojectionStart2dVr();
// Empty Comment
void sceHmdReprojectionStartMultilayer();
// Empty Comment
void sceHmdReprojectionStartMultilayer2();
// Empty Comment
void sceHmdReprojectionStartWideNear();
// Empty Comment
void sceHmdReprojectionStartWideNearWithOverlay();
// Empty Comment
void sceHmdReprojectionStartWithOverlay();
// Empty Comment
void sceHmdReprojectionStop();
// Empty Comment
void sceHmdReprojectionUnsetCallback();
// Empty Comment
void sceHmdReprojectionUnsetDisplayBuffers();
// Empty Comment
void sceHmdTerminate();

#endif

#ifdef __cplusplus
}
#endif

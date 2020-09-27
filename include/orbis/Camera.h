#ifndef _SCE_CAMERA_H_
#define _SCE_CAMERA_H_

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif

typedef struct OrbisCameraStartParameter {
  uint32_t size;
  uint32_t format[2];
  void* extensions;
} OrbisCameraStartParameter;

typedef struct OrbisCameraPosition {
  uint32_t x;
  uint32_t y;
  uint32_t width;
  uint32_t height;
} OrbisCameraPosition;

typedef struct OrbisCameraFrameData {
  uint32_t size;
  uint32_t mode; // 0 is far 1 is near
  OrbisCameraPosition cameraPosition[8];
  void* framePointerList[8];
  uint32_t frameSize[8];
  uint32_t status[2];
  uint32_t unkn[70];
  void* framePointerGarlic[8];
} OrbisCameraFrameData;

typedef struct OrbisCameraConfigExtention
{
	uint32_t format[4];
	uint32_t resolution;
	uint32_t framerate;
	uint32_t width;
	uint32_t height;
	uint32_t unknown1;
	void* unknown2;
} OrbisCameraConfigExtention;

typedef struct OrbisCameraConfig {
  uint32_t size;
  int32_t type;
  OrbisCameraConfigExtention config[2];
} OrbisCameraConfig;

typedef struct OrbisCameraVideoSyncParameter {
  uint32_t size;
  int32_t syncMode;
  void* unknown;
} OrbisCameraVideoSyncParameter;

// Empty Comment
void sceCameraAudioGetData();
// Empty Comment
void sceCameraAudioGetData2();
// Empty Comment
void sceCameraAudioOpen();
// Empty Comment
void sceCameraChangeAppModuleState();
// Empty Comment
void sceCameraClose();
// Empty Comment
void sceCameraCloseByHandle();
// Empty Comment
void sceCameraGetAttribute();
// Empty Comment
void sceCameraGetAutoExposureGain();
// Empty Comment
void sceCameraGetAutoWhiteBalance();
// Empty Comment
void sceCameraGetCalibrationData();
// Empty Comment
void sceCameraGetConfig();
// Empty Comment
void sceCameraGetContrast();
// Empty Comment
void sceCameraGetDefectivePixelCancellation();
// Empty Comment
void sceCameraGetDeviceConfig();
// Empty Comment
void sceCameraGetDeviceInfo();
// Empty Comment
void sceCameraGetExposureGain();
// Get camera frame
int sceCameraGetFrameData(int32_t handle, OrbisCameraFrameData *data);
// Empty Comment
void sceCameraGetGamma();
// Empty Comment
void sceCameraGetHue();
// Empty Comment
void sceCameraGetLensCorrection();
// Empty Comment
void sceCameraGetSaturation();
// Empty Comment
void sceCameraGetSharpness();
// Empty Comment
void sceCameraGetWhiteBalance();
// Check if camera is connected
int sceCameraIsAttached(int32_t index);
// Empty Comment
void sceCameraIsValidFrameData();
// Open handle with camera
int sceCameraOpen(int32_t userId, int32_t type, int32_t index, void* params);
// Empty Comment
void sceCameraOpenByModuleId();
// Empty Comment
void sceCameraRemoveAppModuleFocus();
// Empty Comment
void sceCameraSetAppModuleFocus();
// Empty Comment
void sceCameraSetAttribute();
// Empty Comment
void sceCameraSetAttributeInternal();
// Empty Comment
void sceCameraSetAutoExposureGain();
// Empty Comment
void sceCameraSetAutoWhiteBalance();
// Empty Comment
void sceCameraSetCalibData();
// Apply config to camera
int32_t sceCameraSetConfig(int32_t handle, OrbisCameraConfig* config);
// Empty Comment
void sceCameraSetConfigInternal();
// Empty Comment
void sceCameraSetContrast();
// Empty Comment
void sceCameraSetDebugStop();
// Empty Comment
void sceCameraSetDefectivePixelCancellation();
// Empty Comment
void sceCameraSetDefectivePixelCancellationInternal();
// Empty Comment
void sceCameraSetExposureGain();
// Empty Comment
void sceCameraSetForceActivate();
// Empty Comment
void sceCameraSetGamma();
// Empty Comment
void sceCameraSetHue();
// Empty Comment
void sceCameraSetLensCorrection();
// Empty Comment
void sceCameraSetLensCorrectionInternal();
// Empty Comment
void sceCameraSetProcessFocusByHandle();
// Empty Comment
void sceCameraSetSaturation();
// Empty Comment
void sceCameraSetSharpness();
// Set camera in sync with video output
int32_t sceCameraSetVideoSync(int32_t handle, OrbisCameraVideoSyncParameter* params);
// Empty Comment
void sceCameraSetVideoSyncInternal();
// Empty Comment
void sceCameraSetWhiteBalance();
// Start the camera
int32_t sceCameraStart(int32_t handle, OrbisCameraStartParameter* params);
// Empty Comment
void sceCameraStartByHandle();
// Empty Comment
void sceCameraStop();

#endif

#ifdef __cplusplus
}
#endif
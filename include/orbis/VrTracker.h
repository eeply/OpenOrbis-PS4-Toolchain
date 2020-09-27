#ifndef _SCE_VR_TRACKER_H_
#define _SCE_VR_TRACKER_H_

#include <stdint.h>
#include <orbis/_types/vr_tracker.h>

#ifdef __cplusplus 
extern "C" {
#endif

// Empty Comment
void sceVrTrackerCpuProcess();
// Empty Comment
void sceVrTrackerGetPlayAreaWarningInfo();
// Empty Comment
int32_t sceVrTrackerGetResult(OrbisVrTrackerResultParam* params, OrbisVrTrackerResultData* data);
// Empty Comment
void sceVrTrackerGetTime();
// Empty Comment
int32_t sceVrTrackerGpuSubmit(OrbisVrTrackerGpuSubmitParam* params);
// Empty Comment
int32_t sceVrTrackerGpuWait(OrbisVrTrackerGpuWaitParam* params);
// Empty Comment
void sceVrTrackerGpuWaitAndCpuProcess();
// Empty Comment
int32_t sceVrTrackerInit(OrbisVrTrackerInitParam* params);
// Empty Comment
int32_t sceVrTrackerNotifyEndOfCpuProcess(OrbisVrTrackerNotifyEndOfCpuProcessParam* param);
// Empty Comment
int32_t sceVrTrackerQueryMemory(OrbisVrTrackerMemoryParams* params, void* data);
// Empty Comment
void sceVrTrackerRecalibrate();
// Register new device to tracker
int sceVrTrackerRegisterDevice(uint32_t type, int32_t handle);
// Empty Comment
void sceVrTrackerRegisterDeviceInternal();
// Empty Comment
void sceVrTrackerResetOrientationRelative();
// Empty Comment
void sceVrTrackerSetDurationUntilStatusNotTracking();
// Empty Comment
void sceVrTrackerTerm();
// Empty Comment
void sceVrTrackerUnregisterDevice();
// Empty Comment
int32_t sceVrTrackerUpdateMotionSensorData(OrbisVrTrackerUpdateMotionSensorDataParam* param);


#endif

#ifdef __cplusplus
}
#endif
#pragma once 

#include <stdint.h>
#include <orbis/_types/camera.h>

typedef struct OrbisVrTrackerMemoryResult {
	uint32_t size;
	uint32_t onionSize;
	uint32_t onionAlignment;
	uint32_t garlicSize;
	uint32_t garlicAlignment;
	uint32_t workSize;
	uint32_t workAlignment;
	uint32_t unknown[9];
} OrbisVrTrackerMemoryResult;

typedef struct OrbisVrTrackerCalibrationSettings {
	uint32_t hmdCalibrationMode; // 0 manual, 1 auto
	uint32_t padCalibrationMode;
	uint32_t moveCalibrationMode;
	uint32_t gunCalibrationMode;
	uint32_t unknown[4];
} OrbisVrTrackerCalibrationSettings;

typedef struct OrbisVrTrackerMemoryParams {
	uint32_t size;
	uint32_t profile; // 0 or 100
	uint32_t unknown[6];
	OrbisVrTrackerCalibrationSettings calibrationSettings;
} OrbisVrTrackerMemoryParams;

typedef struct OrbisVrTrackerInitParam {
	uint32_t size;
	uint32_t profile;
	uint32_t parallel;
	int32_t hmdThreadPrio;
	int32_t padThreadPrio;
	int32_t moveThreadPrio;
	int32_t gunThreadPrio;
	int32_t unknown;
	uint64_t cpumask;
	OrbisVrTrackerCalibrationSettings calibrationSettings;

	void* onionPointer;
	uint32_t onionSize;
	uint32_t onionAlignment;

	void* garlicPointer;
	uint32_t garlicSize;
	uint32_t garlicAlignment;

	void* workPointer;
	uint32_t workSize;
	uint32_t workAlignment;

	int32_t gpuPipeId;
	int32_t gpuQueueId;
} OrbisVrTrackerInitParam;

typedef struct OrbisVrTrackerGpuSubmitParam {
	uint32_t size;
	int32_t trackingPreference; // 0 is far 1 is near
	int32_t cameraCheckMode; // 0 is enable 1 is disable
	int32_t devicePermit; // 0 track all 1 track HMD
	int32_t robustness; // 0 high
	uint32_t unknown[11];
	OrbisCameraFrameData cameraFrame;
} OrbisVrTrackerGpuSubmitParam;

typedef struct OrbisVrTrackerResultParam {
	uint32_t size;
	int32_t handle;
	int32_t resultType;
	uint32_t unknown1;
	uint64_t predictionTime;
	int32_t orientation;
	uint32_t unknown2;
	int32_t usage;
	uint32_t frame;
	uint32_t marker;
	uint32_t unknown[2];
} OrbisVrTrackerResultParam;

typedef struct Vec3f {
	float x;
	float y;
	float z;
} Vec3f;

typedef struct Quat {
	float x;
	float y;
	float z;
	float w;
} Quat;

typedef struct Pose {
	Vec3f position;
	uint32_t unknown;
	Quat orientation;
	uint32_t unknown2[8];
} Pose;

typedef struct OrbisVrTrackerHmdInfo {
	Pose pose;
	Pose leftEye;
	Pose rightEye;
	Pose headPose;
	uint32_t backTracking;
	uint32_t unknown[15];
} OrbisVrTrackerHmdInfo;

typedef struct OrbisVrTrackerMoveInfo {
	Pose pose;
	uint32_t unknown[64];
} OrbisVrTrackerMoveInfo;

typedef struct OrbisVrTrackerResultData {
	int32_t handle;
	uint32_t connected; // 0 nc 1 connected
	uint32_t unknown[2];
	uint64_t timestamp;
	uint64_t deviceTimestamp;
	uint32_t recalibrateNeeded;
	uint32_t brightness;
	uint32_t unknown2[3];

	uint32_t status; // 0 not started, 1 tracking 2 not tracking 3 calibrating
	uint32_t unknown3[2];
	Vec3f velocity;
	Vec3f acceleration;
	Vec3f angularVelocity;
	Vec3f angularAcceleration;
	uint32_t unknown4[4];
	union
	{
		OrbisVrTrackerHmdInfo hmdInfo;
		OrbisVrTrackerMoveInfo moveInfo;
	};
	uint32_t frameNumber;
	uint32_t unknown5[42];
} OrbisVrTrackerResultData;

typedef struct OrbisVrTrackerGpuWaitParam {
	int32_t size;
	int32_t unknown[7];
} OrbisVrTrackerGpuWaitParam;

typedef struct OrbisVrTrackerNotifyEndOfCpuProcessParam {
	uint32_t size;
	uint32_t unknown[7];
} OrbisVrTrackerNotifyEndOfCpuProcessParam;

typedef struct OrbisVrTrackerUpdateMotionSensorDataParam
{
	uint32_t size;
	int32_t deviceType;
	int32_t operationMode;
	int32_t handle;
	int32_t unknown[4];
} OrbisVrTrackerUpdateMotionSensorDataParam;

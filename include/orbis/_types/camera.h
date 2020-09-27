#pragma once 

#include <stdint.h>

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

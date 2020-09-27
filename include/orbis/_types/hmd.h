#pragma once 

#include <stdint.h>

typedef struct OrbisHmdInitializeParams {
    void* unknown1;
    uint8_t unknown2[8];
} OrbisHmdInitializeParams;

typedef struct OrbisHmdDeviceInformation {
    uint32_t status;
    uint32_t userId;
    uint8_t unknown1[4];
    uint32_t panelWidth;
    uint32_t panelHeight;
    uint16_t latencyRefresh90Hz;
    uint16_t latencyRefresh120Hz;
    uint8_t mounted;
    uint8_t unknown2[7];
} OrbisHmdDeviceInformation;

#pragma once

#include <stdint.h>

#define ORBIS_MOVE_BUTTON_SELECT 	  0x0001
#define ORBIS_MOVE_BUTTON_T	   	      0x0002
#define ORBIS_MOVE_BUTTON_MOVE   	  0x0004
#define ORBIS_MOVE_BUTTON_START  	  0x0008
#define ORBIS_MOVE_BUTTON_TRIANGLE 	  0x0010
#define ORBIS_MOVE_BUTTON_CIRCLE	  0x0020
#define ORBIS_MOVE_BUTTON_CROSS	      0x0040
#define ORBIS_MOVE_BUTTON_SQUARE      0x0080


typedef struct vec_float3
{
    float x;
    float y;
    float z;
} vec_float3;

typedef struct OrbisMoveData {
  vec_float3 acceleration;
  vec_float3 gyro;
  uint16_t buttons;
  uint16_t analogT;
  uint8_t unknown1[19];
  uint64_t timestamp;
  uint8_t count;
  float temperature;
} OrbisMoveData;
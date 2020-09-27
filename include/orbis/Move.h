#ifndef _SCE_MOVE_H_
#define _SCE_MOVE_H_

#include <stdint.h>
#include <orbis/_types/move.h>

#ifdef __cplusplus 
extern "C" {
#endif

// Close move controller handle
int sceMoveClose(int handle);
// Get move controller device info
void sceMoveGetDeviceInfo(int handle, void *data);
// Empty Comment
void sceMoveGetExtensionPortInfo();
// Empty Comment
int sceMoveInit(void);
// Empty Comment
int sceMoveOpen(int userID, int type, int index);
// Empty Comment
int sceMoveReadStateLatest(int handle, OrbisMoveData *data);
// Empty Comment
void sceMoveReadStateRecent();
// Empty Comment
void sceMoveResetLightSphere();
// Empty Comment
void sceMoveSetExtensionPortOutput();
// Set Sphere color in rgb
int sceMoveSetLightSphere(int handle, uint8_t r, uint8_t g, uint8_t b);
// Intensity of vibration from 0 to 255
int sceMoveSetVibration(int handle, uint8_t intensity);
// Empty Comment
void sceMoveTerm();

#endif

#ifdef __cplusplus
}
#endif
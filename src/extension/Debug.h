#ifndef DEBUG_H
#define DEBUG_H

#include <SDL/SDL.h>
#include <stdint.h>

void debugDrawPixel(int x, int y, uint32_t pixel);
void debugDrawCircle(int x, int y, int r);
GameObject *initCircleObj(float r, float x, float y, float vx, float vy);

#endif

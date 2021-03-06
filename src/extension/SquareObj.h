#ifndef NETOBJ_H
#define NETOBJ_H
#include <stdbool.h>
#include "Common.h"
#include "UtilObj.h"
#include "Debug.h"

void initSquareObj(GameObject *squareObj, float x, float y, float w, float h,
  bool isSolid);
void drawSquareObj(GameObject *squareObj);
void setAsGoal(GameObject *scoreObj);

#endif

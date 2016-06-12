#include "SquareObj.h"

#define sx       squareObj->v1.vec.x
#define sy       squareObj->v1.vec.y
#define sw       squareObj->v2.vec.x
#define sh       squareObj->v2.vec.y

void animate(SDL_Surface *animationSource, int i, int j, int width, int height, int x, int y){
  SDL_Rect srcrect;
  int startx = i * width;
  int starty = j * height;
  srcrect.x = startx;
  srcrect.y = starty;
  srcrect.w = width;
  srcrect.h = height;
  SDL_Rect destrec;
  destrec.x = x;
  destrec.y = y;
  destrec.w = width;
  destrec.h = height;
  SDL_BlitSurface(animationSource, &srcrect, screen, &destrec);
}

void drawSquareObj(GameObject *squareObj) {
  if(squareObj->sprite != NULL) {
    SDL_Rect pos = { .x = sx,
                     .y = sy,
                     .w =  0,
                     .h =  0 };
    SDL_BlitSurface(squareObj->sprite, NULL, screen, &pos);
  } else {
    debugDrawSquare(sx, sy, sw, sh);
  }
}

/** An object which has a square collider. A sprite attached will be drawn
* upon the top-left corner of the squareObj.
*/
void initSquareObj(GameObject *squareObj, float x, float y, float w,
  float h, bool isSolid) {
  clearObj(squareObj);
  squareObj->colliderType = isSolid? COL_BOX : COL_NET;

  sx = x;
  sy = y;
  sw = w;
  sh = h;

  squareObj->update = NULL;
  squareObj->draw = &drawSquareObj;

  squareObj->v6.gFunc = &collDoNothing;
}

//
// Created by Shoupu Wan on 4/3/23.
//

#ifndef CPPSANDBOX_PAINTER_H
#define CPPSANDBOX_PAINTER_H

#include "turtle.h"
class Painter {
private:
  Turtle *pTurtle;

public:
  explicit Painter(Turtle *pTurtle) : pTurtle(pTurtle) {}
  int DrawCircle(int x, int y, int r) {
    pTurtle->PenUp();
    pTurtle->PenDown();
    return 1;
  }
};

#endif // CPPSANDBOX_PAINTER_H

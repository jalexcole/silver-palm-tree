#pragma once
#include <string>
#include <vector>
#include "raylib.h"

class Scene {
  
  public:
    virtual void update();
    virtual void draw();
};
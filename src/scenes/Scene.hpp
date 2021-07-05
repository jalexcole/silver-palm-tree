#pragma once
#include <string>
#include <vector>
#include "raylib.h"

class Scene {
  
  public:
    Scene();
    virtual void update();
    virtual void draw();
    virtual void initialize() = 0;
};
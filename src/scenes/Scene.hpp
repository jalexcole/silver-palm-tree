#pragma once
#include <string>
#include <vector>
#include "raylib.h"

class Scene2D {
  protected:
    std::vector<std::string> soundTracks;
    std::vector<Texture2D> textureList;
  public:

    Scene2D();
    virtual void update(float deltaTime);
    virtual void draw();

    std::vector<std::string> getSoundTracks();
};
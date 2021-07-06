#pragma once
#include <string>
#include <vector>
#include "raylib.h"

class Scene
{

protected:
  std::vector<std::string> soundTracks;
  std::vector<Image> images;
  Camera2D camera;

public:
  Scene();
  virtual void update();
  virtual void draw();
  virtual void initialize();
  std::vector<std::string> getSoundTracks();
};
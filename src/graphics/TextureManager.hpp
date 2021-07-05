#pragma once
#include <vector>
#include <string>
#include <map>
#include "raylib.h"

class TextureManager
{
public:
  TextureManager *getInstance();

  void loadImagePaths(std::vector<std::string> &paths);
  void loadImages(std::vector<Image> &images);

private:
  TextureManager();
  TextureManager *textureManager;

  std::vector<Texture2D> textures;
  void loadTextures();
  void unloadTextures();
  std::map<std::string, Texture2D &> textureMap;
};
#pragma once
#include <vector>
#include <string>
#include <map>
#include "raylib.h"


class TextureManager {
  private:
    std::vector<Texture2D> textures;
    void loadTextures();
    void unloadTextures();
    std::map<std::string, Texture2D&> textureMap;

  public:
    TextureManager();
    void loadImagePaths(std::vector<std::string> &paths);
    void loadImages(std::vector<Image> &images);

};
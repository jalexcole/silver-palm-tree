#pragma once
#include <vector>
#include "Scene.hpp"
// This controls the scenes and overall game states between screens
// TODO: Convert this to a singleton instance

// #include "audio/SoundManager.hpp"
// #include "input/InputManager.hpp"


class SceneManager
{
public:
  SceneManager();
  void update();
  void render();
  void changeScene();
  void addScene(Scene2D &scene);

private:
  std::vector<Scene2D> scenes;
  Scene2D currentScene;
  int sceneIndex;


  // These are to be the only two instances of these functions.
  // InputManager inputManager;
  // SoundManager soundManager;
};
#pragma once
#include <vector>
#include "Scene.hpp"


#include "../audio/SoundManager.hpp"
#include "../input/InputManager.hpp"


class SceneManager
{
public:
  static SceneManager* getInstance();

  void update();
  void render();
  void changeScene();
  void nextScene();
  void addScene(Scene scene);

private:
  SceneManager();
  static SceneManager *sceneManager;

  std::vector<Scene> scenes;
  // Scene currentScene;
  long sceneIndex;
  

  // These are to be the only two instances of these functions.
  // InputManager inputManager;
  // SoundManager soundManager;
};
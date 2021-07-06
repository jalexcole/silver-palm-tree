#pragma once
#include <vector>
#include <unordered_map>
#include <string>
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
  void addScene(Scene* scene);
  void exit();

private:
  SceneManager();
  static SceneManager *sceneManager;

  std::unordered_map<std::string, long> sceneTable;
  std::vector<Scene*> scenes;
  long sceneIndex;
  
};
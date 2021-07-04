#include "SceneManager.hpp"
#include "MainMenu.hpp"
#include "../audio/SoundManager.hpp"
#include "../input/InputManager.hpp"

SceneManager::SceneManager() {}
SceneManager* SceneManager::getInstance() {
    if (!sceneManager) {
        sceneManager = new SceneManager();
    }
    return sceneManager;
}
SceneManager* SceneManager::sceneManager = 0;

void SceneManager::update() {
    
}
void SceneManager::render() {

}
void SceneManager::changeScene() {

}
void SceneManager::addScene(Scene2D &scene) {
    scenes.push_back(scene);
}
#include "SceneManager.hpp"
#include "MainMenu.hpp"
#include "../audio/SoundManager.hpp"
#include "../input/InputManager.hpp"

SceneManager::SceneManager(){
    MainMenu mainMenu;
    
    addScene(mainMenu);



}
void SceneManager::update() {
    inputManager.update();
    soundManager.update();
}
void SceneManager::render() {

}
void SceneManager::changeScene() {

}
void SceneManager::addScene(Scene2D &scene) {
    scenes.push_back(scene);
}
#include "Application.hpp"



int main() {
    // SoundManager soundManager = soundManager.getInstance();
    Application* game = new Application();
    game->initialize();
    game->start();
    return 0;
}
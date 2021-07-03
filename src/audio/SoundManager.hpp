#pragma once
#include "raylib.h"
#include <string>
#include <vector>

// TODO: Convert to Singleton
class SoundManager {
  public:
    SoundManager();
    // static SoundManager& getInstance();
    void playSound(std::string);
    void setMusic(std::string);

    void update();

    void setMasterVolume(float);
    void addTrack(std::string);
    void addTracks(std::vector<std::string> &trackList);

  private:
    std::vector<Music> tracks;

    int currentTrack; 
    Music music;
    Sound sound;
    float volume;
    // static SoundManager* soundManager;
    
};
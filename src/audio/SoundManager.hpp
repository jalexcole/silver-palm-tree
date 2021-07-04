#pragma once
#include "raylib.h"
#include <string>
#include <vector>

// TODO: Convert to Singleton
class SoundManager {
  public:
    static SoundManager* getInstance();
    void playSound(std::string);
    void setMusic(std::string);

    void update();

    void setMasterVolume(float);
    void addTrack(std::string);
    void addTracks(std::vector<std::string> &trackList);
    void initialize();

  private:
    std::vector<Music> tracks;
    SoundManager();
    int currentTrack; 
    Music music;
    Sound sound;
    float volume;
    static SoundManager *soundManager;
    
    
};
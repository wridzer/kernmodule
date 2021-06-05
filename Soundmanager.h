//
// Created by wridz on 27/05/2021.
//
#pragma once

#include <SFML/Audio.hpp>
#include <string>


class Soundmanager {
public:
    Soundmanager();
    ~Soundmanager();
    void Play(std::string filename);
private:
    sf::SoundBuffer buffer;
    sf::Sound sound;
};



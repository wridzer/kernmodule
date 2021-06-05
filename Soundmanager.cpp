//
// Created by wridz on 27/05/2021.
//

#include "Soundmanager.h"

Soundmanager::Soundmanager() {

}

Soundmanager::~Soundmanager() {

}

void Soundmanager::Play(std::string filename) {
    buffer.loadFromFile("../Sounds/" + filename);
    sound.setBuffer(buffer);
    sound.play();
}
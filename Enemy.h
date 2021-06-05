//
// Created by Wridzer on 24/05/2021.
//

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"

class Enemy {
    public:
        Enemy(int windowW);
        ~Enemy();
        void Move(float dt);
        sf::CircleShape Draw(float dt);
        void BorderCheck();
        Vector2* position;
        float velocityX;
        float velocityY;
        float frictionCoef = 0.6;
        float mass = 1;
        int enimSize = 10;

    private:
        int wW;
        float posX = rand() % 800;
        float posY = -10;
        float moveSpeed = rand() % 25;
        float fallSpeed = rand() % 25;
        float minSpeed = 10;
        sf::CircleShape shape;
};




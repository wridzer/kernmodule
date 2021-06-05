//
// Created by wridz on 23/05/2021.
//

#pragma  once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"
#include "time.h"


class Player {
    public:
        Player(int windowW, int windowH);
        ~Player();
        void Move(float dt);
        void borderCheck();
        sf::CircleShape Draw();
        Vector2* position;
        float velocity;
        float frictionCoef = 0.6;
        float mass = 1;
        int playerSize = 20;

    private:
        float posX = 200;
        float posY = 100;
        float bottemPos = 50;
        float moveSpeed = 500;
        sf::CircleShape shape;
        int wW;
        int wH;
};



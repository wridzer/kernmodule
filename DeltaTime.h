//
// Created by Wridzer on 24/05/2021.
//

#pragma once
#include <SFML/Graphics.hpp>


class DeltaTime {
    public:
        float dt;
        sf::Clock clock;
        DeltaTime();
        ~DeltaTime();
        void UpdateDT();
};
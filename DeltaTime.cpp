//
// Created by Wridzer on 24/05/2021.
//

#include "DeltaTime.h"

DeltaTime::DeltaTime() {

}

DeltaTime::~DeltaTime() {

}

void DeltaTime::UpdateDT() {
    dt = clock.restart().asSeconds();
}
#pragma once
#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Position.h"
#include <vector>

class Strawberry : public Thing {
private:
    Position position;

public:
    Strawberry();

    int calculateMoney(std::vector<Thing*>& category);
    Strawberry* createNewItem();
    void setPosition(Position newPosition);
    Position getPosition();
    bool isNear(int index, Position position);
};

#endif // STRAWBERRY_H
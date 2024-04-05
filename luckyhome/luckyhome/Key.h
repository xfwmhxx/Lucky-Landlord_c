#pragma once
#ifndef KEY_H
#define KEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include "../luckyhome/Position.h"
#include <vector>

class Key : public Thing {
private:
    Position position;

public:
    Key();

    int calculateMoney(std::vector<Thing*>& category);
    Key* createNewItem();
    void setPosition(Position newPosition);
    bool isNear(int index, Position position);
};

#endif // !KEY_H
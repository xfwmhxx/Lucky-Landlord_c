#pragma once
#ifndef MAGICKEY_H
#define MAGICKEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include "../luckyhome/Position.h"
#include <vector>

class Magickey : public Thing {
private:
    Position position;

public:
    Magickey();

    int calculateMoney(std::vector<Thing*>& category);
    Magickey* createNewItem();
    void setPosition(Position newPosition);
    bool isNear(int index, Position position);
};

#endif // !MAGICKEY_H
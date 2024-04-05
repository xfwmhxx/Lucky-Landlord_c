#pragma once
#ifndef RAIN_H
#define RAIN_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Flower.h"
#include "../luckyhome/Position.h"
#include <vector>

class Rain : public Thing {
private:
    Position position;

public:
    Rain();

    int calculateMoney(std::vector<Thing*>& category);
    Rain* createNewItem();
    void setPosition(Position newPosition);
    bool isNear(int index, Position position);
};

#endif // RAIN_H
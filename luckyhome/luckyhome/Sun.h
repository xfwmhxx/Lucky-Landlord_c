#pragma once
#ifndef SUN_H
#define SUN_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Flower.h"
#include "../luckyhome/Position.h"
#include <vector>

class Sun : public Thing {
private:
    Position position;

public:
    Sun();

    int calculateMoney(std::vector<Thing*>& category);
    Sun* createNewItem();
    void setPosition(Position newPosition);
    bool isNear(int index, Position position);
};

#endif // SUN_H
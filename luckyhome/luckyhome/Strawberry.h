#pragma once
#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Strawberry : public Thing {
private:
    int position;

public:
    Strawberry();

    int calculateMoney(std::vector<Thing*>& category);
    Strawberry* createNewItem();
    void setPosition(int newPosition);
    int getPosition();
    bool isNear(int index, int position);
};

#endif // STRAWBERRY_H
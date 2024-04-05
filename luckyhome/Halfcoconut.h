#pragma once
#ifndef HALFCOCONUT_H
#define HALFCOCONUT_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Halfcoconut : public Thing {
private:
    int position;
public:
    Halfcoconut() {}
    int calculateMoney(vector<Thing*> category);
    Halfcoconut* createNewItem();
    bool isNear(int position1, int position2);
    int getPosition();
};

#endif // ! HALFCOCONUT

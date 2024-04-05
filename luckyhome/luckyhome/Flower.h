#pragma once
#ifndef FLOWER_H
#define FLOWER_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Flower : public Thing {
public:
    Flower();
    int calculateMoney(vector<Thing*> category);
    Flower* createNewItem();


};

#endif // ! FLOWER_H

#pragma once
#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Fish : public Thing {
private:
    int position;
public:
    Fish();
    int calculateMoney(vector<Thing*> category);
    Fish* createNewItem();
    bool isNear(int position, int fishPosition);
    int getPosition();

};


#endif // ! FISH_H
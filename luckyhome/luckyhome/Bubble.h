#pragma once
#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Bubble : public Thing {
public:
    Bubble();
    int calculateMoney(vector<Thing*> category);
    Bubble* createNewItem();

};

#endif // !BUBBLE_H
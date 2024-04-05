#pragma once
#ifndef COIN_H
#define COIN_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Coin : public Thing {
public:
    Coin() {}
    int calculateMoney(vector<Thing*> category);
    Coin* createNewItem();

};

#endif // !COIN_H

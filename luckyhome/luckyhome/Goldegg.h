#pragma once
#ifndef GOLDEGG_H
#define GOLDEGG_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Goldegg : public Thing {
public:
    Goldegg();
    int calculateMoney(vector<Thing*> category);
    Goldegg* createNewItem();


};

#endif // ! GOLDEGG
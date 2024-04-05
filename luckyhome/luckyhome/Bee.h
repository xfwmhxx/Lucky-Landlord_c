#pragma once
#ifndef BEE_H
#define BEE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Bee : public Thing {
private:
    int position;
public:

    Bee();

    int calculateMoney(vector<Thing*> category);

    bool isNear(int index, int position);

    Bee* createNewItem();


};

#endif // !BEE_H
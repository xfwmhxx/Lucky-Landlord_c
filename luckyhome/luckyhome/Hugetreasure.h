#pragma once
#ifndef HUGETREASURE_H
#define HUGETREASURE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Hugetreasure : public Thing {
public:
    Hugetreasure();
    int calculateMoney(vector<Thing*>& category);
    Hugetreasure* createNewItem();


};

#endif // !HUGETREASURE_H
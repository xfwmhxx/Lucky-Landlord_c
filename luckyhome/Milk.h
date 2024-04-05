#pragma once
#ifndef MILK_H
#define MILK_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>


class Milk : public Thing {
public:
    Milk() {}
    int calculateMoney(vector<Thing*> category);
    Milk* createNewItem();


};

#endif // !MILK_H

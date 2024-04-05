#pragma once
#ifndef COW_H
#define COW_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>
#include <random>

class Cow : public Thing {
public:
    Cow() : Thing() {}
    int calculateMoney(vector<Thing*> itemCategory);
    Cow* createNewItem();

};

#endif // !COW_H

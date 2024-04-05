#pragma once
#ifndef PEARL_H
#define PEARL_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Pearl : public Thing {
public:
    Pearl() {}
    int calculateMoney(vector<Thing*>& category);
    Pearl* createNewItem();


};

#endif // !PEARL_H
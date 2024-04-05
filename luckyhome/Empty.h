#pragma once
#ifndef EMPTY_H
#define EMPTY_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Empty : public Thing {
public:
    Empty();

    int calculateMoney(std::vector<Thing*> category);

    Empty* createNewItem();

};

#endif // !EMPTY_H

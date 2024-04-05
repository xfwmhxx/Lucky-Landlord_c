#pragma once
#ifndef MAGICKEY_H
#define MAGICKEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Magickey : public Thing {
private:
    int position;

public:
    Magickey();

    int calculateMoney(std::vector<Thing*>& category);
    Magickey* createNewItem();
    void setPosition(int newPosition);
    bool isNear(int index, int position);
};

#endif // !MAGICKEY_H
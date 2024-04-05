#pragma once
#ifndef KEY_H
#define KEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Key : public Thing {
private:
    int position;

public:
    Key();

    int calculateMoney(std::vector<Thing*>& category);
    Key* createNewItem();
    void setPosition(int newPosition);
    bool isNear(int index, int position);
};

#endif // !KEY_H
#pragma once
#ifndef LOCKBOX_H
#define LOCKBOX_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Lockbox : public Thing {
public:
    Lockbox() {}
    int calculateMoney(vector<Thing*>& category);
    Lockbox* createNewItem();


};

#endif // !LOCKBOX_H
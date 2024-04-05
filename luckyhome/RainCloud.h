#pragma once
#ifndef RAINCLOUD_H
#define RAINCLOUD_H

#include "../luckyhome/Props.h"
#include "../luckyhome/Thing.h"
#include<vector>

class RainCloud : public Props {
public:
    RainCloud();

    int calculateMoney(vector<Thing*>category);
    RainCloud* createNewItem();
};

#endif  // RAINCLOUD_H
#pragma once
#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Bubble : public Thing {
public:
    Bubble();

    int calculateMoney(std::vector<Thing*>* category, int counter, int counter_now, int j) override;

    Bubble* createNewItem() override;
    
    int getCounter_now();

};

#endif // !BUBBLE_H
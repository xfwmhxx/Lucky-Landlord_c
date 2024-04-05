#pragma once
#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include"../luckyhome/Milk.h"
#include"../luckyhome/Position.h"
#include <vector>

class Cat : public Thing {
private:
    int position;
public:
    Cat() {}
    int calculateMoney(vector<Thing*> category);
    Cat* createNewItem();
    bool isNear(int position1, int position2);
    int getPosition();



};

#endif // !CAT_H
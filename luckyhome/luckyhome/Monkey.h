#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Coconut.h"
#include "../luckyhome/Halfcoconut.h"
#include <vector>

class Monkey : public Thing {
private:
    int position;

public:
    Monkey();

    int calculateMoney(std::vector<Thing*>& category, std::vector<Thing*>& playerScene);
    Monkey* createNewItem();
    void setPosition(int newPosition);
    bool isNear(int index, int position);
};

#endif // MONKEY_H

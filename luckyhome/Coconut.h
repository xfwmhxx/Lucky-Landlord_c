#ifndef COCONUT_H
#define COCONUT_H

#include "../luckyhome/Thing.h"
#include "../luckyhome/Halfcoconut.h"
#include <vector>

class Coconut : public Thing {
private:
    int position;

public:
    Coconut();

    int calculateMoney(std::vector<Thing*> category);
    bool isNear(int position1, int position2);
    int getPosition();
    Coconut* createNewItem();
};

#endif // !COCONUT_H
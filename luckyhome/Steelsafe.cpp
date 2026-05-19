#include "../luckyhome/Steelsafe.h"

Steelsafe::Steelsafe() {
    setPrice(1);
    setName("steelsafe");
    setDescribe("价值30枚金币,可以被钥匙消除");
}

int Steelsafe::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Steelsafe* Steelsafe::createNewItem() {
    return new Steelsafe();
}
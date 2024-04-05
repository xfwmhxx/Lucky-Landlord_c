#include "../luckyhome/Steelsafe.h"

Steelsafe::Steelsafe() {
    setPrice(1);
    setName("steelsafe");
    setDescribe("价值30枚金币,可以被钥匙消除");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Steelsafe* createNewItem() {
    return new Steelsafe();
}
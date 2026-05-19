#include "../luckyhome/Hugetreasure.h"

Hugetreasure::Hugetreasure() {
    setPrice(1);
    setName("hugetreasure");
    setDescribe("价值100枚金币,可以被钥匙消除");
}

int Hugetreasure::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Hugetreasure* Hugetreasure::createNewItem() {
    return new Hugetreasure();
}
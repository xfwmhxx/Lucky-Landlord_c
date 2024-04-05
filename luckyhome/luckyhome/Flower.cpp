#include "../luckyhome/Flower.h"

Flower::Flower() {
    setPrice(1);
    setName("flower");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int Flower::calculateMoney(vector<Thing*> category) {
    return 1;
}

Flower* Flower::createNewItem() {
    return new Flower();
}
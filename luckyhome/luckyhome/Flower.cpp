#include "../luckyhome/Flower.h"

Flower::Flower() {
    setPrice(1);
    setName("flower");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int calculateMoney(vector<Thing*> category) {
    return 1;
}

Flower* createNewItem() {
    return new Flower();
}
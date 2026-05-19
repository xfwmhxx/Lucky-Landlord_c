#include "../luckyhome/Goldegg.h"

Goldegg::Goldegg() {
    setPrice(1);
    setName("goldegg");
    setDescribe("¼ÛÖµ4Ã¶½ð±Ò");
}

int Goldegg::calculateMoney(vector<Thing*> category) {
    return 4;
}

Goldegg* Goldegg::createNewItem() {
    return new Goldegg();
}
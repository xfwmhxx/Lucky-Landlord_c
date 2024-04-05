#include "../luckyhome/Goldegg.h"

Goldegg::Goldegg() {
    setPrice(1);
    setName("goldEgg");
    setDescribe("¼ÛÖµ4Ã¶½ð±Ò");
}

int calculateMoney(vector<Thing*> category) {
    return 4;
}

Goldegg* createNewItem() {
    return new Goldegg();
}
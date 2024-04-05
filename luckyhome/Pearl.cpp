#include "../luckyhome/Pearl.h"

Pearl::Pearl() {
    setPrice(1);
    setName("pearl");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Pearl* createNewItem() {
    return new Pearl();
}
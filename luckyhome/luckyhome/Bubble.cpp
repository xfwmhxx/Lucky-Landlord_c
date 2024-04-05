#include "../luckyhome/Bubble.h"

Bubble::Bubble() {
    setPrice(1);
    setName("bubble");
    setDescribe("¼ÛÖµ2Ã¶½ð±Ò");
}

int Bubble::calculateMoney(vector<Thing*> category) {
    int price = 2;
    return price;
}

Bubble* Bubble::createNewItem() {
    return new Bubble();
}
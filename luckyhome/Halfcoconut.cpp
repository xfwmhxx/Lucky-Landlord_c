#include "../luckyhome/Halfcoconut.h"

Halfcoconut::Halfcoconut() : Thing() {
    setPrice(1);
    setName("halfCoconut");
    setDescribe("价值1枚金币,被消除后给予4金币");
}

int Halfcoconut::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            price += 9;
            category[position] = new Empty(); // 消除自身
        }
    }
    return price;
}

Halfcoconut* Halfcoconut::createNewItem() {
    return new Halfcoconut();
}

bool Halfcoconut::isNear(int position1, int position2) {
    // 检查两个位置是否相邻的逻辑实现
    // 返回 true 或 false
    return false;
}

int Halfcoconut::getPosition() {
    // 获取位置的逻辑实现
    // 返回位置值
    return position;
}
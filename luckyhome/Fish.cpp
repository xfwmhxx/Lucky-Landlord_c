#include "../luckyhome/Fish.h"
#include "../luckyhome/Empty.h"

Fish::Fish() : Thing() {
    setPrice(3);
    setName("fish");
    setDescribe("价值1枚金币，消除周围的泡泡，每消除一个泡泡，获得4枚金币");
}

int Fish::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "bubble" && isNear(i, this->getPosition())) {
            price += 4;
            category[i] = new Empty();
        }
    }
    return price;
}

Fish* Fish::createNewItem() {
    return new Fish();
}

bool Fish::isNear(int position, int fishPosition) {
    // 检查两个位置是否相邻的逻辑实现
    // 返回 true 或 false
    return false;
}

int Fish::getPosition() {
    // 返回鱼的位置
    return position;
}
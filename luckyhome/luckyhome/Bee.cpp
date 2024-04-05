#include "../luckyhome/Bee.h"

Bee::Bee(){
    setPrice(2);
    setName("bee");
    setDescribe("价值1枚金币，如果周围有花，每朵花增加1枚金币");
}

int Bee::calculateMoney(std::vector<Thing*> category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "flower" && isNear(i, position)) {
            value += 2;
        }
    }
    return value;
}

bool Bee::isNear(int index, int position) {
    // 根据需求实现判断物品是否相邻的逻辑
    // 如果相邻，返回true；否则返回false
    return false;
}

Bee* Bee::createNewItem() {
    return new Bee();
}
#include "../luckyhome/Strawberry.h"

Strawberry::Strawberry() {
    setPrice(2);
    setName("strawberry");
    setDescribe("价值3枚金币，如果周围有其他草莓，每多1个草莓增加3枚金币");
}

int Strawberry::calculateMoney(std::vector<Thing*>& category) {
    int price = 3;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "strawberry" && isNear(i, position) &&
            category[i]->getPosition() != position) { //缺少函数重载
            price += 3;
        }
    }
    return price;
}

Strawberry* Strawberry::createNewItem() {
    return new Strawberry();
}

void Strawberry::setPosition(Position newPosition) {
    position = newPosition;
}

Position Strawberry::getPosition() {
    return position;
}

bool Strawberry::isNear(int index, Position position) {
    int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);
}
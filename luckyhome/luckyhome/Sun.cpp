#include "../luckyhome/Sun.h"

Sun::Sun() {
    setPrice(1);
    setName("sun");
    setDescribe("价值4枚金币，如果周围有花，每朵花增加4枚金币");
}

int Sun::calculateMoney(std::vector<Thing*>& category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "flower" && isNear(i, position)) {
            price += 4;
        }
    }
    return price;
}

Sun* Sun::createNewItem() {
    return new Sun();
}

void Sun::setPosition(int newPosition) {
    position = newPosition;
}

bool Sun::isNear(int index, int position) {
    /*int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);*/
    return false;
}
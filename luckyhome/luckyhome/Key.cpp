#include "../luckyhome/Key.h"

Key::Key() {
    setPrice(3);
    setName("key");
    setDescribe("价值1枚金币,可以消除相邻的财宝箱");
}

int Key::calculateMoney(std::vector<Thing*>& category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "treasure" && isNear(i, position)) {
            price += 50;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();
            break;
        }
        else if (category[i]->getName() == "lockbox" && isNear(i, position)) {
            price += 15;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();
            break;
        }
        else if (category[i]->getName() == "hugetreasure" && isNear(i, position)) {
            price += 100;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();
            break;
        }
        else if (category[i]->getName() == "steelsafe" && isNear(i, position)) {
            price += 30;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();
            break;
        }
    }
    return price;
}

Key* Key::createNewItem() {
    return new Key();
}

void Key::setPosition(Position newPosition) {
    position = newPosition;
}

bool Key::isNear(int index, Position position) {
    int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);
}
#include "../luckyhome/Magickey.h"

Magickey::Magickey() {
    setPrice(3);
    setName("Magickey");
    setDescribe("价值1枚金币,可以消除相邻的财宝箱");
}

int Magickey::calculateMoney(std::vector<Thing*>& category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "treasure" && isNear(i, position)) {
            price += 150;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if (category[i]->getName() == "lockbox" && isNear(i, position)) {
            price += 45;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if (category[i]->getName() == "hugetreasure" && isNear(i, position)) {
            price += 300;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if (category[i]->getName() == "steelsafe" && isNear(i, position)) {
            price += 90;
            category[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
    }
    return price;
}

Magickey* Magickey::createNewItem() {
    return new Magickey();
}

void Magickey::setPosition(int newPosition) {
    position = newPosition;
}

bool Magickey::isNear(int index, int position) {
    /*int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);*/
    return false;
}
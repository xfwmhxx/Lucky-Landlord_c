#include "../luckyhome/Cat.h"

Cat::Cat(){
    setPrice(3);
    setName("cat");
    setDescribe("价值1枚金币，消除周围的牛奶，每消除一个牛奶，获得9枚金币");

}

int Cat::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            price += 9;
            category[i] = new Empty(); // 消除牛奶
        }
    }
    return price;
}

Cat* Cat::createNewItem() {
    return new Cat();
}

bool Cat::isNear(int position1, int position2) {
    //int row = position.getRow();//问题行
    //int column = position.getColumn();
    //int indexRow = index / 5;
    //int indexColumn = index % 5;
    //return (abs(row - indexRow) <= 1 && abs(column - indexColumn) <= 1);
    return 0;
}

int Cat::getPosition() {
    // 获取位置的逻辑实现
    // 返回位置值
    return position;
}
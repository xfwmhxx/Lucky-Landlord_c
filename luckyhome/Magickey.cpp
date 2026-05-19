#include "../luckyhome/Magickey.h"

Magickey::Magickey() {
    setPrice(3);
    setName("magickey");
    setDescribe("价值1枚金币,可以消除相邻的财宝箱");
}

int Magickey::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem, int j) {
    int value = 1;
    int length = (*playerItem).size();
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "treasure" && isNear(i, j)) {
            value += 150;
            //delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "treasure")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "lockbox" && isNear(i, j)) {
            value += 45;
            //delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "lockbox")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "hugetreasure" && isNear(i, j)) {
            value += 300;
            //delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "hugetreasure")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
        else if ((*category)[i]->getName() == "steelsafe" && isNear(i, j)) {
            value += 90;
            //delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            for (int x = 0; x < length; ++x) {
                if ((*playerItem)[x]->getName() == "steelsafe")
                {
                    (*playerItem).erase((*playerItem).begin() + x);
                    break;
                }
            }
            break;
        }
    }
    return value;
}

Magickey* Magickey::createNewItem() {
    return new Magickey();
}

//void Magickey::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Magickey::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}
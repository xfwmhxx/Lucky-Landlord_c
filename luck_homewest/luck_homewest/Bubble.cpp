#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Bubble : public CommentItem {
public:
    Bubble() {
        this->setPriority(1);
        this->setNumber(1);
        this->setName(1);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("¼ÛÖµ2Ã¶½ð±Ò");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
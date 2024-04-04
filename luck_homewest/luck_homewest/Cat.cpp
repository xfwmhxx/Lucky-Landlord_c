#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Cat : public CommentItem {
public:
    Cat() {
        this->setPriority(3);
        this->setNumber(2);
        this->setName(2);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值1枚金币，消除周围的牛奶，每消除一个牛奶，获得9枚金币");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
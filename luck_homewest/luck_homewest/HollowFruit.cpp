#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class HollowFruit : public CommentItem {
public:
    HollowFruit() {
        this->setPriority(1);
        this->setNumber(12);
        this->setName(12);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值8枚金币。如果周围有空，每有一个空就额外给予1枚金币,如果与0个空相邻则消除自身，给予8金币");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
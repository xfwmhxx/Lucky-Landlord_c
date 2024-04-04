#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class HalfCoconut : public CommentItem {
public:
    HalfCoconut() {
        this->setPriority(1);
        this->setNumber(11);
        this->setName(11);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值2枚金币,被消除后给予12金币(猴子的加成)");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
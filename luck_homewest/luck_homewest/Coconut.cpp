#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Coconut : public CommentItem {
public:
    Coconut() {
        this->setPriority(1);
        this->setNumber(3);
        this->setName(3);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值2金币,被消除后给予12金币，并且变成2个半个椰子");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
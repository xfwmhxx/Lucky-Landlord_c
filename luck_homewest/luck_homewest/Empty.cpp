#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Empty : public CommentItem {
public:
    Empty() {
        this->setPriority(1);
        this->setNumber(6);
        this->setName(6);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
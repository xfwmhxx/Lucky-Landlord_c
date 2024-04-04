#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Flower : public CommentItem {
public:
    Flower() {
        this->setPriority(1);
        this->setNumber(8);
        this->setName(8);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("¼ÛÖµ1Ã¶½ð±Ò");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
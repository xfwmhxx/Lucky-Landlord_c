#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class GoldEgg : public CommentItem {
public:
    GoldEgg() {
        this->setPriority(1);
        this->setNumber(9);
        this->setName(9);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("¼ÛÖµ4Ã¶½ð±Ò");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
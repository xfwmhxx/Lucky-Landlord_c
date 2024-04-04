#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Cow : public CommentItem {
public:
    Cow() {
        this->setPriority(4);
        this->setNumber(5);
        this->setName(5);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值3金币,如果老虎机面板上有空格,有15%概率增加牛奶");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};
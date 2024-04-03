#pragma once
#include "commentitem.h"
#include<iostream>
#include<string>
#include "forms.h"
#include "Item.h"

class Bee : public commentitem {
public:
    Bee() {
        this->setPriority(2);
        this->setName(0);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bee.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("价值1枚金币，如果周围有花，每朵花增加1枚金币");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 1;
        for (int i = 0; i < 20; i++) {
            if (category.getItemCategory().at(i).getName() == "flower" && this->isNear(i, this->getPosition())) {
                price += 2;
            }
        }
        return price;
    }

    Bee* createNewItem() override {
        return new Bee();
    }*/
};
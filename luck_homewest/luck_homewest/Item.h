#include<iostream>
#include<string>
#include "forms.h"
using namespace std;
class Item {
protected:
    const int PANEL_SIZE = 20;//表示一个固定的面板大小
    int number = 0;//表示物品的编号
    string name;//表示物品的名字
    string description = "null";//存储物品的描述

public:
    Item() {}

    Item(string name, int number, string description) : name(goods[number]), number(number), description(description) {}
    //用于后面调用时直接创建
    string getName() {
        return goods[number];
    }

    void setName(string name) {
        this->name = name;
    }

    string getDescription() {
        return description;
    }

    void setDescription(string description) {
        this->description = description;
    }

    /*virtual int calculateMoney(int category) {
        return 0;
    }

    virtual Item* createNewItem() {
        return new Item();
    }*/
};

#ifndef ITEM_H
#define ITEM_H

#include<iostream>
#include <string>
#include "forms.h"
using namespace std;

class Item {
protected:
    const int PANEL_SIZE = 20;
    int number = 0; //默认编号为0
    string name; //该物品的名字
    string description = "null"; //储存物品的描述

public:
    Item();
    Item(string name, int number, string description);//物品的属性
    
    int getNumber();//访问返回当前物品的number编号
    void setNumber(int number); //设置当前物品的编号


    string getName();//这个函数用来在知道物品的编号的情况下找到物品对应的中文名称
    void setName(int number); //这个函数用来设置当前物品的名称（感觉没什么用）

    string getDescription(); //返回当前物品的描述
    void setDescription(string description); //用于设置当前物品的描述

    // ...
};

#endif
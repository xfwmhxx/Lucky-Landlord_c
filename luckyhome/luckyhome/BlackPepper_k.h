#pragma once
#ifndef BLACKPEPPER_K_H
#define BLACKPEPPER_K_H

#include "../luckyhome/Essence.h"

class BlackPepper_k : public Essence {
public:
    BlackPepper_k();
    int calculateMoney(int count);
    bool Dodelete();//用来判断当前符号是否应该被删除
    BlackPepper_k* createNewItem();
};

#endif // BLACKPEPPER_K_H

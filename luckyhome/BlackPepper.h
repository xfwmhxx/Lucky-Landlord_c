#pragma once
#ifndef BLACKPEPPER_H
#define BLACKPEPPER_H

#include <string>
#include <vector>
#include "../luckyhome/Props.h"
#include "../luckyhome/Thing.h"
using namespace std;


// 黑胡椒类
class BlackPepper : public Props {
public:
    BlackPepper();

    int calculateMoney(int count) override;
    BlackPepper* createNewItem() override;

    // 其他成员函数和成员变量...
};

#endif // BLACKPEPPER_H
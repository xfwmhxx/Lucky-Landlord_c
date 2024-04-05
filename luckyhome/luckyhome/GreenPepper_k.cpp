#include "GreenPepper_k.h"
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
GreenPepper_k::GreenPepper_k() {
    setName("青椒");
    setPrice(1);
    setNumber(2);
    setDescribe("如果有至少3个相同且非空位的符号每周二在每次旋转之后给予30枚金币。在之后消除自身。");
    setCounter(1); // 代表当前道具是不删除就永远存在的
    setAccumulator(0);
}
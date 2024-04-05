#include "../luckyhome/BlackPepper_k.h"

BlackPepper_k::BlackPepper_k() {
    setName("黑胡椒");
    setPrice(1);
    setNumber(1);
    setDescribe("每消除一个符号，给予10枚金币。在之后消除自身。");
    setCounter(1); // 代表当前道具是不删除就永远存在的
    setAccumulator(0);
}
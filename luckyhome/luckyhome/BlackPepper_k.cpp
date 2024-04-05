#include"../luckyhome/Props.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
class BlackPepper_k : public Props {
public:
	BlackPepper_k() {
		setName("黑胡椒");
		setPrice(1);
		setNumber(1);
		setDescribe("每消除一个符号，给予10枚金币。在之后消除自身。");
		setCounter(1);//代表当前道具是不删除就永远存在的
		setAccumulator(0);
	};
};
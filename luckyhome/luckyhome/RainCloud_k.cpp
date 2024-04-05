#include"../luckyhome/Props.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不使那件物品消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
class RainCloud_k : public Props {
public:
	RainCloud_k() {
		setName("雨云");
		setPrice(2);
		setNumber(5);
		setDescribe("如果雨和花相邻，则消除自身。被消除后，此游戏中的雨和花给予额外1枚金币");
		setCounter(1);
		setAccumulator(0);
	};
};
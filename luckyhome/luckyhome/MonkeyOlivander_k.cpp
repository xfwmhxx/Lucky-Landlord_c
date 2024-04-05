#include"../luckyhome/Props.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不使那件物品消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
class MonkeyOlivander_k : public Props {
public:
	MonkeyOlivander_k() {
		setName("猴子奥利凡德");
		setPrice(2);
		setNumber(4);
		setDescribe("如果香蕉，椰子或半个椰子被猴子消除，则消除自身。被消除后，此游戏的猴子给予额外2倍金币 ");
		setCounter(1);
		setAccumulator(0);
	};
};
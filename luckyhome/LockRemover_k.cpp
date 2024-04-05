#include"../luckyhome/Props.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
class LockRemover_k : public Props {
public:
	LockRemover_k() {
		setName("开锁器");
		setPrice(3);
		setNumber(3);
		setDescribe("在3个带锁箱，保险箱，宝箱和巨大宝箱被消除后，消除自身。带锁箱，保险箱，宝箱和巨大宝箱由100%的几率被消除。");
		setCounter(3);//代表当前道具满足条件3次就删除
		setAccumulator(0);
	};
};
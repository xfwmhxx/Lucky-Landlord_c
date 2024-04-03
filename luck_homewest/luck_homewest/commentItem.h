#include<iostream>
#include<string>
#include "Item.h"
using namespace std;
class commentitem : public Item{
private:
	int priority = 0;//优先级默认为 0
public:
	commentitem() {}

	commentitem(string name, int number, string description, int priority)
		: Item(name, number, description), priority(priority) {}
	//通过父类item中的方法来补充物品的属性
	int getPriority() {
		return priority;
		//访问某物品的优先级时调用
	}

	void setPriority(int priority) {
		this->priority = priority;
		//设置某物品的优先级时调用
	}


};
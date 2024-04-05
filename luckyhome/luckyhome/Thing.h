#pragma once
#ifndef _THING_H_
#define _THING_H_
#include<map>
#include<string>
#include<iostream>
using namespace std;


//关于物品的类
class Thing {

protected:
	string name;//物品的名称
	int value;//物品的价值
	int price;//物品的优先级
	int number;//物品的编号
	string describe;//物品的描述
	int counter;//计时器
	int counter_now = 0;//当前计时器
	int Accumulator;//计数器
	int Accumulator_now = 0;//当前计数器
	int positions;

public:

	Thing();
	virtual ~Thing();
	string getName();
	void setName(string name);

	int getValue();
	void setValue(int value);

	int getPrice();
	void setPrice(int price);

	int getNumber();
	void setNumber(int number);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getAccumulator();
	void setAccumulator(int Accumulator);

	int getPosition();
	void setPosition(int position);
};


#endif
#pragma once
#ifndef _ESSENCE_H_
#define _ESSENCE_H_
#include<map>
#include<string>
#include<iostream>
using namespace std;
//关于精华的类
class Essence {
protected:
	string name;
	int number;
	int price;
	string describe;
	int counter;
	int Accumulator;

public:
	virtual void funct() = 0;//虚函数，因为每一个道具的功能不一样。希望子类能重新定义。即便子类不定义也不会报错（别乱加const）
	Essence();
	Essence(string name, int number, int price, string describe, int counter, int Accumulator);

	string getName();
	void setName(string name);

	int getNumber();
	void setNumber(int number);

	int getPrice();
	void setPrice(int price);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getAccumulator();
	void setAccumulator(int Accumulator);

};

#endif

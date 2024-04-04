#pragma once
#ifndef _PROPS_H_
#define _PROPS_H_
#include<map>
#include<string>
#include<iostream>
using namespace std;
//关于道具的类
class Props {
protected:
	string name;
	int price;
	string describe;

public:
	int getName();
	void setName(string name);

	int getPrice();
	void setPrice(int price);

	int getDescribe();
	void setDescribe(string describe);

};

#endif
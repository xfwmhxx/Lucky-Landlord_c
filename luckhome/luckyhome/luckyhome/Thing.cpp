#include "../luckyhome/Thing.h"
using namespace std;
Thing::Thing() {}

Thing::Thing(string name, int value, int number, int price, string describe)
	:name(name), value(value), number(number), price(price), describe(describe) {}

string Thing::getName() {
	return name;
}
void Thing::setName(string name) {
	this->name = name;
}

int Thing::getValue() {
	return value;
}
void Thing::setValue(int value) {
	this->value = value;
}

int Thing::getNumber() {
	return number;
}
void Thing::setNumber(int number) {
	this->number = number;
}

int Thing::getPrice() {
	return price;
}
void Thing::setPrice(int price) {
	this->price=price; 
}

string Thing::getDescribe() {
	return describe;
}
void Thing::setDescribe(string describe) {
	this->describe = describe;
}

int Thing::getCounter() {
	return counter;
};
void Thing::setCounter(int counter) {
	this->counter = counter;
};
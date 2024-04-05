#include "../luckyhome/Thing.h"
using namespace std;

Thing::Thing() :name(""), number(0), price(0), describe(""), counter(0), Accumulator(0) {}
Thing::~Thing() {}

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
	this->price = price;
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

int Thing::getAccumulator() {
	return Accumulator;
};
void Thing::setAccumulator(int Accumulator) {
	this->Accumulator = Accumulator;
};

int Thing::getPosition() {
	return positions;
};
void Thing::setPosition(int position) {
	this->positions = position;
};
#include"../luck_homewest/Item.h"
using namespace std;
Item::Item() {}

Item::Item(string name, int number, string description)
    : name(goods[number]), number(number), description(description) {}

int Item::getNumber() {
    return number;
}

void Item::setNumber(int number) {
    this->number = number;
}

string Item::getName() {
    return goods[number];
}

void Item::setName(int number) {
    this->name = goods[number];
}

string Item::getDescription() {
    return description;
}

void Item::setDescription(string description) {
    this->description = description;
}


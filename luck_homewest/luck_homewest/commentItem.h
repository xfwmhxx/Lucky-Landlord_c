#ifndef COMMENTITEM_H
#define COMMENTITEM_H

#include "Item.h"
using namespace std;
class CommentItem : public Item {
protected:
	int priority = 0;//物品的优先级

public:
	CommentItem();
	CommentItem(string name, int number, string description, int priority);

	int getPriority(); //用来访问得到当前物品的优先级
	void setPriority(int priority); //用来设置当前物品的优先级
};

#endif
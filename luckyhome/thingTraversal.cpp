#include "../luckyhome/thingTraversal.h"

void thingTraversal(vector<Thing*>* initalizeItem, vector<Thing*>* punchboardItem, vector<Props*>* playerScene,  vector<Thing*>* playerItem, vector<Essence*>* playerEssence, int* dailyMoney)
{
	int length = (*punchboardItem).size();
		for (int j = 0; j < length; j++)
		{
			//调用多种类型，因为有多个虚函数种类
			//第一种
			*dailyMoney += ((*punchboardItem)[j] -> calculateMoney((*punchboardItem)));

			((*punchboardItem)[j]->calculateMoney((*punchboardItem)));

			*dailyMoney += ((*punchboardItem)[j]->calculateMoney((*punchboardItem), j));

			((*punchboardItem)[j]->calculateMoney((*punchboardItem), j));
			//第二种
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem));

			((*punchboardItem)[j]->calculateMoney(punchboardItem));
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, j));

			((*punchboardItem)[j]->calculateMoney(punchboardItem, j));
			//第三种
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem);

			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem, j));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem, j);
			//第四种
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem,playerScene,playerItem,playerEssence, j));

			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerScene, playerItem, playerEssence, j);
			//第五种
			*dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, (*punchboardItem)[j]->getCounter(), (*punchboardItem)[j]->getCounter_now(), j));

			((*punchboardItem)[j]->calculateMoney(punchboardItem, (*punchboardItem)[j]->getCounter(), (*punchboardItem)[j]->getCounter_now(), j));

		}
		return;
}
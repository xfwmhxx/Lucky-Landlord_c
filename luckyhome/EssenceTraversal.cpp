#include"../luckyhome/EssenceTraversal.h"

void EssenceTraversal(vector<Thing*>* punchboardItem, vector<Essence*>* playerEssence,int* dailyMoney, int dailycount)
{
	size_t length = (*playerEssence).size();

	for (int i = 1; i < 5; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			if ((*playerEssence)[j]->getPrice() == i)
			{
				*dailyMoney += (*playerEssence)[j]->calculateMoney(punchboardItem);
				*dailyMoney += (*playerEssence)[j]->calculateMoney(dailycount);

				(*playerEssence)[j]->calculateMoney(punchboardItem);

			}
		}
	}
	return;
}
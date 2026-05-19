#include"../luckyhome/punchboardItemChoose.h"

void punchboardItemChoose(vector<Thing*>* initalizeItem, vector<Thing*>* punchboardItem, vector<Thing*>* playerItem)
{
	size_t length = (*playerItem).size();

	vector<Thing*>InterimRandom((*playerItem));
	while (length < 20)
	{
		InterimRandom.push_back((*initalizeItem)[6]);
		length = InterimRandom.size();
	}
	int n = (*playerItem).size();
	int m = 20;
	vector<Thing*>InterimChoose;
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	shuffle(InterimRandom.begin(), InterimRandom.end(), default_random_engine(seed));
	(*punchboardItem).clear();
	for (int i = 0; i < 20; i++)
	{
		(*punchboardItem).push_back(InterimRandom[i]);
	}
	return;
}

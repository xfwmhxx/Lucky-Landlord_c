#include "../luckyhome/ThingChoose.h"

void ThingChoose(vector<Thing*>* initalizeItem, vector<Thing*>* selectedElements)
{
	vector<Thing*>InterimChoose;
	vector<Thing*>InterimRandom((*initalizeItem));
	InterimRandom.erase(InterimRandom.begin() + 6);
	//unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	random_device rd;
	mt19937 generator(rd());
	shuffle(InterimRandom.begin(), InterimRandom.end(), generator);
	(*selectedElements).clear();
	for (int i = 0; i < 3; i++)
	{
		(*selectedElements).push_back(InterimRandom[i]);
	}
	return;
}
#include "../luckyhome/EssenceChoose.h"

void EssenceChoose(vector<Essence*>* initalizeEssence,vector<Essence*>* selectedElements)
{
	vector<Essence*>InterimChoose;
	vector<Essence*>InterimRandom((*initalizeEssence));
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
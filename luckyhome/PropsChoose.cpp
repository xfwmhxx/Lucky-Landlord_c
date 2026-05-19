#include "../luckyhome/PropsChoose.h"

void PropsChoose(vector<Props*>* initalizeProps, vector<Props*>* selectedElements)
{
	vector<Props*>InterimChoose;
	vector<Props*>InterimRandom((*initalizeProps));
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
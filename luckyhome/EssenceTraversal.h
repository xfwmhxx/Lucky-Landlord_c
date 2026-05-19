#pragma once
#ifndef ESSENCETRAVERSAL_H
#define ESSENCETRAVERSAL_H
#include<iostream>
#include<vector>
#include<string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//增加精华
#include"../luckyhome/BlackPepper_k.h"
#include"../luckyhome/GreenPepper_k.h"
#include"../luckyhome/LockRemover_k.h"
#include"../luckyhome/MonkeyOlivander_k.h"
#include"../luckyhome/RainCloud_k.h"
using namespace std;
void EssenceTraversal(vector<Thing*>* punchboardItem, vector<Essence*>* playerEssence, int* dailyMoney, int dailycount);

#endif
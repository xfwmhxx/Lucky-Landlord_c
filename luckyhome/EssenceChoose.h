#pragma once
#ifndef ESSENCECHOOSE_H
#define ESSENCECHOOSE_H
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <random>
#include <chrono>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//增加精华
#include"../luckyhome/BlackPepper_k.h"
#include"../luckyhome/GreenPepper_k.h"
#include"../luckyhome/LockRemover_k.h"
#include"../luckyhome/MonkeyOlivander_k.h"
#include"../luckyhome/RainCloud_k.h"
void EssenceChoose(vector<Essence*>* initalizeEssence, vector<Essence*>* selectedElements);
#endif
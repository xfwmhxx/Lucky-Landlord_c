#pragma once
#ifndef PROPSCHOOSE_H
#define PROPSCHOOSE_H
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <random>
#include <chrono>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//增加道具
#include "../luckyhome/BlackPepper.h"
#include "../luckyhome/GreenPepper.h"
#include "../luckyhome/LockRemover.h"
#include"../luckyhome/MonkeyOlivander.h"
#include"../luckyhome/RainCloud.h"

void PropsChoose(vector<Props*>* initalizeProps, vector<Props*>* selectedElements);
#endif

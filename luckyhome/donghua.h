#pragma once
#ifndef DONGHUA_H_
#define DONGHUA_H_

#include <graphics.h>		// 引用图形库头文件
#include <easyx.h>
#include <stdio.h>
#include <conio.h>
#include "Thing.h"
#include <vector>
#include <map>
#include <Windows.h>
#include "../luckyhome/ThingChoose.h"
#include <ctime>

//bool isxuanzhuan;
//bool ischoice1;
//bool ischoice2;
//bool ischoice3;
//bool istietu;
extern bool isxuanzhuan;
extern bool ischoice1;
extern bool ischoice2;
extern bool ischoice3;
extern bool istietu;
extern bool isStartgame1;

void backboard();

void loadpicture();

void Options();

void zhizuozu();

void Continue();

void Startgame();

void chuwujian();

void Itembook();

void Essencebook(int Essence1);

void Propsbook(int Props1);

void Itembook(int Item1);

void Tongjishuju();

void Gamegonglue(int page);

void tiaozhuan();

void xuanzhuan();

void correspond();

void stick(int& a, int& b);

void doing(vector<Thing*> category, map<int, pair<int, int>> nmap);

//void add();

void xuanzhuan();

void choice();
void additem(vector<Thing*>* category, vector<Thing*>* selectedElements);

void addprops(vector<Props*>* category, vector<Props*>* selectedElements);

void addessence(vector<Essence*>* category, vector<Essence*>* selectedElements);

void tietu(vector<Thing*>* category, map<int, pair<int, int>>& itemMap);

//vector<Thing*>* category, vector<Thing*>* selectedElements
void Playing();

void fangdong1();
void fangdong2();
void fangdong3();
void fangdong4();
void fangdong5();
void fangdong6();
void fangdong7();
void fangdong8();
void fangdong9();
void fangdong10();
void fangdong11();
void fangdong12();

void jiesuan1();
void jiesuan2();
void jiesuan3();
void jiesuan4();
void jiesuan5();
void jiesuan6();
void jiesuan7();
void jiesuan8();
void jiesuan9();
void jiesuan10();
void jiesuan11();
void jiesuan12();

void final();

void loadpicturepage();// 背景图片

void loadpictureoption();// 选项图片

void loadpicturezhizuozu();// 制作组图片

void loadpicturecontinue();// 继续游戏图片

void loadpicturefangdong();// 房东邮箱

void loadpicturegamegonglue();// 游戏玩法

void loadpictureEssencebook();// 精华簿功能

void loadpicturePropsbook();// 道具簿功能

void loadpicturetongjishuju();// 统计数据

void loadpictureItembook();// 物品簿功能

void loadpicturexuanzhuan();// 旋转动画

void loadpicturebackground();// 背景图

void loadpictureitem();// 物品功能

void loadpictureessence();

void loadpictureprops();

void loadpicturezhuanpan();// 转盘图

void loadpicturechoice();// 选择添加

void loadpicturejiesuan();// 结算

void loadpicturechoiceitem();
void loadpicturechoiceprops();
void loadpicturechoiceessence();

void loadpicturefinal_lose();


#endif // !DONGHUA_H_

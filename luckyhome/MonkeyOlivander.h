#pragma once
#ifndef MONKEYOLIVANDER_H
#define MONKEYOLIVANDER_H

#include "../luckyhome/Props.h"
#include "../luckyhome/Thing.h"
#include<vector>

class MonkeyOlivander : public Props {
public:
    MonkeyOlivander();

    MonkeyOlivander* createNewItem();
};

#endif  // MONKEYOLIVANDER_H
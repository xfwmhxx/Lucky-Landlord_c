#pragma once
// LockRemover.h

#ifndef LOCKREMOVER_H
#define LOCKREMOVER_H

#include "Props.h"
#include "Thing.h"
#include<vector>
#include <random>
#include <ctime>

class LockRemover : public Props {
public:
    LockRemover();

    int calculateMoney(vector<Thing*>category);

    LockRemover* createNewItem();
};

#endif
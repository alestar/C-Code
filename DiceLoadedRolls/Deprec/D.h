#include "DieStandar.h"
#ifndef DIELOADED_H
#define DIELOADED_H

class DieLoaded : protected DieStandar
{
private:
    int loadSide;
    int loadAmount;
    int numLoadSide;
public:
    DieLoaded();
	DieLoaded(int,int,int);
    int roll();
};

#endif
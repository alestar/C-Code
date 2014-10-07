#ifndef DIEFACTORY_H
#define DIEFACTORY_H
#include "DieLoaded.h"

class DieFactory {

public:
	enum DieType {die_standar, die_loaded, die_custom};
	DieFactory();
	Die* getDieInstance(int dietype,int pid, int tFaces, int lFace,int lAmount,int numLFaces);
	//DieStandar getDieInstance(int dietype);
	//DieStandar getDieInstance(DieType dietype);
	//DieStandar getDieInstance(DieType dietype,int pid, int tFaces, int lFace,int lAmount,int numLFaces);
    //static DieStandar createDie( int dieType);
	//static Die* createDie( DieType dieType,int pid, int tFaces, int lFace,int lAmount,int numLFaces);
};

#endif
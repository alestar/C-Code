#ifndef DIEEXPERIMENT_H
#define DIEEXPERIMENT_H
#include "DieFactory.h"
#include "DieStats.h"

class DieExperiment {

private:
	int numRolls;
	//Die *myDices;
	DieFactory myDieFactory;
	DieStats myDieStats;
public:

    DieExperiment();
	DieExperiment(int numR);

	int getNumRolls();
	void setNumRolls(int numR);

	void RunDieExperiment  (int numR = 100, int dieType=1, int pid=1, int tFaces=6, int lFace=6, int lAmount=3, int numLFaces=1);
	
	//void RunDieExperiment (int numR , int dieType);
	//void RunDieExperiment(DieFactory::DieType dieType ,int numRolls);

};

#endif
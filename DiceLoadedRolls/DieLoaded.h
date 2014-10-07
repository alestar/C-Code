#ifndef DIELOADED_H
#define DIELOADED_H
#include "DieStandar.h"

class DieLoaded : public DieStandar
{
private:
    int loadFace;
	//int**dieFaLoadedFaces;
    int loadAmount;
    int numLoadFaces;
public:
    DieLoaded();
	DieLoaded(int lFace,int lAmount,int numLFaces);
	DieLoaded(int pid, int tFaces, int lFace,int lAmount,int numLFaces);
	double distProb(int totalFaces, int numLFaces, int lAmount);
    int roll();
	//void print();
};

#endif
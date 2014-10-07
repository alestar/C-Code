#ifndef DIESTANDAR_H
#define DIESTANDAR_H
#include "Die.h"

class DieStandar: public Die {

protected:
	int id;
    int totalFaces;
	int numStdFaces;
	int*dieFaces;
    int faceValue;
public:
    DieStandar();
    DieStandar(int pid, int totalFaces);
	void setTotalFaces(int);
	int getTotalFaces();
	int getFaceValue();
    int roll();
    void print(int countThrow);
};
#endif
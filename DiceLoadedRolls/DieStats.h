#ifndef DIESTATS_H
#define DIESTATS_H
#include <map>
#include <utility>
#include <string.h>
#include "Die.h"
using namespace std;

class DieStats
{
private:
	std::map <int, int > dieDataMap;
	Die* dieData;
public:
    DieStats();
	Die* getdieData();
	void setdieData(Die* dData);
	int getValue(int key);
	void countFace(int key);
	float calcPercent(int key, int total);
	void printDieStats(int id, int tFaces, int numRolls);
	void clean();
};
#endif
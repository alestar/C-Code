#include "StdAfx.h"
#include "DieStats.h"
#include <iostream>
using namespace std;


DieStats::DieStats(){
	//for(int i=1; i<=6; i++){
	//dieDataMap.insert(pair<int, int>(i, 0));
	//	
	//}
}

void DieStats::setdieData(Die* dData){
	dieData=dData;
}

Die* DieStats::getdieData(){
 return dieData;
}

int DieStats::getValue(int key){
	return dieDataMap[key];
}

void DieStats::countFace(int key){
	dieDataMap[key]++;
}

float DieStats::calcPercent(int key, int total){
	return ( (dieDataMap[key]*100) / total );
}

void DieStats::clean(){
	dieDataMap.clear();
}

void DieStats::printDieStats(int id, int tFaces, int numRolls){

	cout <<endl;
	cout <<"Die "<<id <<" Statistics for "<< numRolls <<" rolls:" << endl;
	for(int i=1; i<=tFaces; i++){
		cout <<"Side "<< i <<": " <<"Total of rolls - "<< dieDataMap[i] <<", "<< calcPercent(i,numRolls)<< "% ."<< endl;
	}
}
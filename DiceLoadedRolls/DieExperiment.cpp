#include "stdafx.h"
#include "DieExperiment.h"


DieExperiment::DieExperiment(){
	numRolls= 100;
	myDieFactory= DieFactory();
	myDieStats= DieStats();
}

DieExperiment::DieExperiment(int numR){
	numRolls= numR;
	myDieFactory= DieFactory();
	myDieStats= DieStats();
}


int DieExperiment::getNumRolls(){
	return numRolls;
}

void DieExperiment::setNumRolls(int numR){
	numRolls=numR;
}

void DieExperiment::RunDieExperiment (int numR , int dieType, int pid, int tFaces, int lFace, int lAmount, int numLFaces){

	numRolls= numR;
	int faceVal=0;
	Die*  die = myDieFactory.getDieInstance(dieType, pid,  tFaces,  lFace, lAmount, numLFaces);
	myDieStats.setdieData(die);
	for(int i=0; i<numRolls; i++){
		faceVal=die->roll();
		myDieStats.countFace(faceVal);
		die->print(i+1);
	}
	myDieStats.printDieStats(pid, tFaces,numRolls);
	myDieStats.clean();

}

//void DieExperiment::RunDieExperiment (int numR = 100, int dieType=1){
//	numRolls= numR;
//	DieStandar die = myDieFactory.getDieInstance(dieType);
//
//	for(int i=0; i<numRolls; i++){
//		die.roll();
//		die.print(i+1);
//	}
//}


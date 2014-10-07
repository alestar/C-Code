#include "StdAfx.h"
#include "DieLoaded.h"
#include "Rand.h"
#include<iostream>
using namespace std;


DieLoaded::DieLoaded(){

	DieStandar();
	loadFace=0;// Side loaded with certaim weight
	loadAmount=0;// The weigth
	numLoadFaces=0;// Number of Loaded side(s)
	numStdFaces=totalFaces;// Number of Std side(s)
}

DieLoaded::DieLoaded(int lFace,int lAmount,int numLFaces){

	id=2;
    totalFaces=6;//An standar loaded die with 6 faces

	loadFace=lFace;//*CONSIDERATION:This should be a list or a dictionay with their respective load amount...
	loadAmount=lAmount;
	numLoadFaces=numLFaces;//This should be a list
	numStdFaces= totalFaces-numLoadFaces;

	dieFaces = new int [numStdFaces];
	int count = 0;
	for(int i=0; i< numStdFaces; i++)
	{
		int face=i+1;
		if(face!=loadFace){// Exclude the loaded side
			dieFaces[i]= face + count;//shift a place
		}
		else{
			count=1;
			dieFaces[i]= face + count;
		}
	}
}

DieLoaded::DieLoaded(int pid, int tFaces, int lFace,int lAmount,int numLFaces){

	//DieStandar(pid, numOfFaces);
	id=pid;
    totalFaces=tFaces;
	loadFace=lFace;//*CONSIDERATION:This should be a list or a dictionay with their respective load amount...
	loadAmount=lAmount;
	numLoadFaces=numLFaces;//This should be a list
	numStdFaces= totalFaces-numLoadFaces;

	dieFaces = new int [numStdFaces];
	int count = 0;
	for(int i=0; i< numStdFaces; i++)
	{
		int face=i+1;
		if(face!=loadFace){// Exclude the loaded side
			dieFaces[i]= face + count;//shift a place
		}
		else{
			count=1;
			dieFaces[i]= face + count;
		}
	}
}

double  DieLoaded::distProb(int tFaces, int numLoadFaces, int loadAmount){
	
	int t=(totalFaces - numLoadFaces) + loadAmount;
	double distProb = ((double)loadAmount/t);
	return 	distProb;
}

int DieLoaded::roll(){
	double distprob= distProb(totalFaces,numLoadFaces, loadAmount);// Prob of the loaded side to came out
	double prob=1.0;
	prob=randRealProb();//Random number from 0-1
	/*
	Here is the hard core  of the mathematical part of problem for a loaded die.
	Only two outcomes can ocur during the roll:
	1- Either should came out the loadedSide or..
	2- Either should came out any of the other sides(the NOT loaded sides) that have the same prob (i.e a DieStandar with one face less).
	*/
	if (prob < distprob)//if a random event determined that is likely for the loaded side to came out.
		faceValue= loadFace;
	else{				//same as DieStandar rolling but without the loaded side.	
		return DieStandar::roll();
	}

	return faceValue;
}

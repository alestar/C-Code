#include "stdafx.h"
#include "DieStandar.h"
#include "Rand.h"
#include<iostream>
using namespace std;

//-----------------------------------------------------------------------class DieLoaded
DieStandar::DieStandar()
{
	id=1;
    totalFaces=6;
	numStdFaces=totalFaces;
	
	dieFaces = new int [totalFaces];
	for(int i=0; i< totalFaces; i++)
	{
		dieFaces[i]= i+1;
	}
}

DieStandar::DieStandar(int pid , int tFaces){
	
	id=pid;
    totalFaces=tFaces;
	numStdFaces=totalFaces;

	dieFaces = new int [totalFaces];
	for(int i=0; i< totalFaces; i++)
	{
		dieFaces[i]= i+1;
	}
}

void DieStandar::setTotalFaces(int tFaces){

	totalFaces= tFaces;
	numStdFaces=totalFaces;
}

int DieStandar::getTotalFaces(){

	return totalFaces;
}

int DieStandar:: getFaceValue(){

	return faceValue;
}

int DieStandar::roll(){

	int index= randGen(numStdFaces);	
	faceValue= dieFaces[index];
    return faceValue;
}

void DieStandar::print(int countThrow)
{
	cout <<"Throw "<< countThrow <<": " << "Die "<< id <<" rolled a " << faceValue << endl;
}
//-------------------------------------------------------------------------------------------------
// DiceLoadedRolls.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "DieLoaded.h"
#include "DieExperiment.h"
//#include "DieStandar.h"
//#include "Die.h"

#include <windows.h>
#include<iostream>
#include<ctime>
#include<random>
#include <string>
using namespace std;


void printMenu(){
		cout << "Welcome to the experiment of Rolling Dice by Alejo - (alejandrocoutin@gmail.com)"<< endl;
		cout << " Menu: "<< endl;
		cout << " 1 - Roll a standar die: "<< endl;
		cout << " 2 - Roll a default loaded die: "<< endl;
		cout << " 3 - Roll a set up loaded die: "<< endl;
		cout << " 4 - Exit "<< endl;
	}

void validateIntegerParam(int *param){
	cin >> *param;
	while(!cin)
	{
		cout << "That was NO integer! Please enter an integer for access to the options in Menu: "<< endl;
		cin.clear();
		cin.ignore();
		cin >> *param;
	}
}

void validateParameters(int *pid, int *tFaces, int *lFace,int *lAmount,int *numLFaces){

	cout << "Enter Id"<< endl;
	validateIntegerParam(pid);

	cout << "Enter number of Faces"<< endl;
	validateIntegerParam(tFaces);

	cout << "Enter the loaded face"<< endl;
	validateIntegerParam(lFace);

	cout << "Enter loaded amount"<< endl;
	validateIntegerParam(lAmount);

	cout << "Enter number of loaded faces"<< endl;
	validateIntegerParam(numLFaces);

}

void resetScreen(){
	system("cls");
	printMenu();
}

void setupProgram(int *option){
	resetScreen();
	validateIntegerParam(option);
	srand (static_cast <unsigned> (time(0)));
}

void controlMenu(char *command, int * opt ){
	if(*command == 'e' || *command == 'E' )
		*opt= 4;
	else if(*command == 'm'|| *command == 'M'){
		resetScreen();
		validateIntegerParam(opt);
	}
	else{
		cout << "Select a valid command"<< endl;
	}
	*command=' ';

}

void sleepProgram(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void goodBye(){

	cout << "Bye Bye cheaters and good luck next time  ; )"<< endl;
	sleepProgram(3000);

}



int _tmain(int argc, _TCHAR* argv[])
{
	
	string menu_options1= "Runing experiment using a Standar Die";
	string menu_options2= "Runing experiment using a Default Loaded Die";
	string menu_options3= "Runing experiment using a Custom Die";
	string num_rolls= "Enter the number of roll(s) for the die in the experiment's model...";
	string menu_options= "What you would like to do? e= Exit or m = Menu or any to continue...";

	int option= 0;
	int numRolls=0;
	char command= ' ';
	setupProgram(&option);
	DieExperiment dieExperiment;

	while (option!=4){

		
		if(option == 1){
			cout << num_rolls<< endl;
			validateIntegerParam(&numRolls);
			
			while(command != 'e' && command != 'E'  && command != 'm' && command != 'M'){

				cout << menu_options1<< "for "<< numRolls<< " rolls"<< endl;//Runing Experiment Die Standar for x amount of rolls

				dieExperiment= DieExperiment();// New experiment every time you repeat!
				dieExperiment.RunDieExperiment(numRolls,option);

				cout << menu_options<< endl;
				cin >> command;
			}
			controlMenu(&command,&option);			
		}
		else if(option == 2){
			cout << num_rolls<< endl;
			validateIntegerParam(&numRolls);

			int pid=2;
			int tFaces=6;//Total faces of Die2
			int lFace=1;// Face of the Die2 loaded
			int lAmount=100;
			int numLFaces=1;

			while(command != 'e' && command != 'E'  && command != 'm' && command != 'M'){

				cout << menu_options2<< endl;//Runing Experiment Die loaded

				dieExperiment= DieExperiment();// New experiment every time you repeat!
				dieExperiment.RunDieExperiment(numRolls,option,pid,tFaces,lFace,lAmount,numLFaces);

				cout << menu_options<< endl;
				cin >> command;
			}
			controlMenu(&command,&option);
		}
		else if(option == 3 ){
			cout << num_rolls<< endl;
			validateIntegerParam(&numRolls);

			int pid=0;
			int tFaces=0;
			int lFace=0;
			int lAmount=0;
			int numLFaces=0;
			validateParameters(&pid, &tFaces, &lFace, &lAmount, &numLFaces);

			while(command != 'e' && command != 'E'  && command != 'm' && command != 'M'){

				cout << menu_options3<< endl;//Runing experiment by rolling a Set Up loaded die:

				dieExperiment= DieExperiment();// New experiment every time you repeat!
				dieExperiment.RunDieExperiment(numRolls,option,pid,tFaces,lFace,lAmount,numLFaces);

				cout << menu_options<< endl;
				cin >> command;
			}
			controlMenu(&command,&option);
		}
		else{
			cout << "Please select a valid option of the Menu..."<< endl;
			validateIntegerParam(&option);
		}
	}
	goodBye();
	return 0;
}


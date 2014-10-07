#ifndef RANDOM_H
#define RANDOM_H
#include<ctime>
#include<random>

//void reseed(){
//	srand (static_cast <unsigned> (time(0)));
//}

int randChoice(int max){	
	//reseed();
	// generate random from 1 to top
	int val= (rand()%max) + 1;
	return val;

}

int randGen(int max){
	int r=0;
	std::random_device rd;// Divece use to seed the random engine.
	std::mt19937 mt(rd());// Start random engine.
	std::uniform_int_distribution<int> dist (0, max-1);//Use probabilistc distribution.
	r= dist(mt);//Generate random int.
	return r;
}

double randRealProb(){
	//reseed();
	//generate a double number between 0-1
	double r = (double)rand() / ((double)RAND_MAX + 1);
	return r;
}

int rand_IntRange(int a, int b){

	//generate a double number between a-b
	return ((b-a)*((int)rand()/RAND_MAX))+a;
}

float rand_FloatRange(float a, float b){

	//generate a double number between a-b
	return ((b-a)*((float)rand()/RAND_MAX))+a;
}


/*
float RandomFloat(float a, float b) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = b - a;
    float r = random * diff;
    return a + r;
}

float RandomFloat(float min, float max)
{
    // this  function assumes max > min, you may want 
    // more robust error checking for a non-debug build
    assert(max > min); 
    float random = ((float) rand()) / (float) RAND_MAX;

    // generate (in your case) a float between 0 and (4.5-.78)
    // then add .78, giving you a float between .78 and 4.5
    float range = max - min;  
    return (random*range) + min
}
*/

#endif
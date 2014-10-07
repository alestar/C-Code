#ifndef RAND_H
#define RAND_H

#include<ctime>
#include<random>

//void reseed(){
//	srand (static_cast <unsigned> (time(0)));
//}

int randChoice(int max);

int randGen(int max);

double randRealProb();

int rand_IntRange(int a, int b);

float rand_FloatRange(float a, float b);

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
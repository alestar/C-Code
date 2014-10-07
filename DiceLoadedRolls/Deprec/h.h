#ifndef DIESTANDAR_H
#define DIESTANDAR_H

class DieStandar {

protected:
	int id;
    int numberOfFaces;
    int faceValue;
public:
    DieStandar();
    DieStandar(int, int);
	void setNumberOfFaces(int);
	int getNumberOfFaces();
	int getFaceValue();
    int roll();
    void print();
};
#endif
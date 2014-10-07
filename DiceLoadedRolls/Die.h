#ifndef DIE_H
#define DIE_H

class Die{
public:
	virtual int roll()  = 0;
	virtual void print(int i)  = 0;
};

////class DieStandar: public Die {
//class DieStandar {
//
//protected:
//	int id;
//    int totalFaces;
//	int numStdFaces;
//	int*dieFaces;
//    int faceValue;
//public:
//    DieStandar();
//    DieStandar(int pid, int totalFaces);
//	void setTotalFaces(int);
//	int getTotalFaces();
//	int getFaceValue();
//    int roll();
//    void print(int countThrow);
//};
//
//class DieLoaded : public DieStandar
//{
//private:
//    int loadFace;
//	//int**dieFaLoadedFaces;
//    int loadAmount;
//    int numLoadFaces;
//public:
//    DieLoaded();
//	DieLoaded(int lSide,int lAmount,int numLSide);
//	DieLoaded(int pid , int numOfFaces, int lSide,int lAmount,int numLSide);
//	double distProb(int totalFaces, int numLoadFace, int loadAmount);
//    int roll();
//	//void print();
//};

#endif
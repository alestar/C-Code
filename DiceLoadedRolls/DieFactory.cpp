#include "stdafx.h"
#include <stdexcept>
#include <memory>
#include "DieFactory.h"
 
DieFactory::DieFactory(){}

//DieStandar DieFactory::getDieInstance(int dieType){
//	switch (dieType) {
//    case 1:
//        return  DieStandar();
//	case 2:
//		return  DieLoaded();
//    case 3:
//        return  DieLoaded();
//	}
//}

Die* DieFactory::getDieInstance(int dieType,int pid, int tFaces, int lFace,int lAmount,int numLFaces){
	switch (dieType) {
    case 1:
        return new DieStandar(pid,tFaces);
	case 2:
		return new DieLoaded(lFace,lAmount, numLFaces);
    case 3:
        return new DieLoaded(pid, tFaces, lFace, lAmount, numLFaces);
	}
}

//DieStandar DieFactory::getDieInstance(DieType dieType){
//	switch (dieType) {
//    case die_standar:
//        return  DieStandar();
//	case die_loaded:
//		return  DieLoaded();
//    case die_custom:
//        return  DieLoaded();
//	}
//}
//
//DieStandar DieFactory::getDieInstance(DieType dieType,int pid, int tFaces, int lFace,int lAmount,int numLFaces){
//	switch (dieType) {
//    case die_standar:
//        return DieStandar(pid,tFaces);
//	case die_loaded:
//		return DieLoaded(tFaces,lAmount, numLFaces);
//    case die_custom:
//        return DieLoaded(pid, tFaces, lFace, lAmount, numLFaces);
//	}
//}

//static DieStandar createDie (int dieType) {
//        switch (dieType) {
//            case 1:
//                return  DieStandar();
//			case 2:
//				return  DieLoaded();
//            case 3:
//                return  DieLoaded();
//        }
//        throw "invalid die type.";
//    }

//static Die* createDie (DieFactory::DieType dieType,int pid, int tFaces, int lFace,int lAmount,int numLFaces) {
//        switch (dieType) {
//            case DieFactory::DieType.die_standar:
//				//DieLoaded * diestandar= new DieStandar();
//                return new DieStandar(pid,tFaces);
//			case DieFactory::DieType.die_loaded:
//				return new DieLoaded(tFaces,lAmount, numLFaces);
//            case DieFactory::DieType.die_custom:
//                return new DieLoaded(pid, tFaces, lFace, lAmount, numLFaces);
//        }
//        throw "invalid die type.";
//    }


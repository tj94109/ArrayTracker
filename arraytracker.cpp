#ifndef ARRAYTRACKER_CPP
#define ARRAYTRACKER_CPP
#include<iostream>
#include "arraytracker.h"

using namespace std;

arraytracker::arraytracker(){
    useCount = 0;
    arraySize = 7;
}
int arraytracker::getItem(int itemIndx){
    return items[itemIndx];
}
void arraytracker::setItem(int itemIndx, int newValue){
    items[itemIndx] = newValue;
}
void arraytracker :: displayArray(){
    for(int i=0; i<arraySize; i++){
        if(i!= 0){
            cout << " , ";
        }
        cout << items[i];
    }
    cout << "\n";
}


int arraytracker:: getUseCount(){
    return useCount;
}

#indef

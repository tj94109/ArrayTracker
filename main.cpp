#include <iostream>
using namespace std;

const int ARRAY_SIZE = 7;

void displayArray(int anArray[]){

    for(int i=0; i<ARRAY_SIZE; i++){
        if(i!= 0){
            cout << " , ";
        }
        cout << anArray[i];
    }
    cout << "\n";
}

void badSort(int anArray[]){
    bool haveDoneSwap = true;
    while(haveDoneSwap){
        haveDoneSwap = false;
        for(int i = 0; i < ARRAY_SIZE -1; i++){
            if(anArray[i] > anArray[i+1]){
                haveDoneSwap = true;
                int temp = anArray[i];
                anArray[i] = anArray[i+1];
                anArray[i+1] = temp;
            }
       }
    }
}

int main()
{
    int anArray[] ={4, 5, 2, 1, 5, 6, 7};
    displayArray(anArray);
    badSort(anArray);
    displayArray(anArray);

}

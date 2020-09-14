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

int badSort(int anArray[]){
    bool haveDoneSwap = true;
    int arrayInteractions = 0;
    int temp = 0;
    while(haveDoneSwap){
        haveDoneSwap = false;
        for(int i = 0; i < ARRAY_SIZE -1; i++){
            arrayInteractions +=2;
            if(anArray[i] > anArray[i+1]){
                haveDoneSwap = true;
                arrayInteractions+=1;
                temp = anArray[i];
                arrayInteractions +=2;
                anArray[i] = anArray[i+1];
                arrayInteractions +=1;
                anArray[i+1] = temp;
            }
       }

    }
    return arrayInteractions;
}

int main()
{
    int anArray[] ={4, 5, 2, 1, 5, 6, 7};
    displayArray(anArray);
    int arrayInteractions = badSort(anArray);
    cout << "data actions: " << arrayInteractions << "\n";
    displayArray(anArray);

}

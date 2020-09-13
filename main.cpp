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

int main()
{
    int anArray[] ={4, 5, 2, 1, 5, 6, 7};
    displayArray(anArray);


}

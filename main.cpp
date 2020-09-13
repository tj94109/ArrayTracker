#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 7;
    int anArray[] ={4, 5, 2, 1, 5, 6, 7};
    for(int i=0; i<ARRAY_SIZE; i++){
        if(i!= 0){
            cout << " , ";
        }
        cout << anArray[i];
    }
    cout << "\n";
}

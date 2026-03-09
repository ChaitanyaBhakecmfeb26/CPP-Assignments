#include <iostream>

using namespace std;


int main (){

    int *arr = (int*) malloc(5 * sizeof(int)); 

    cout << "Enter 5 integers:" << endl;

    for(int i=0 ; i< 5 ; i++){
        cin >> arr[i];
    }

    free(arr);

    return 0;
}
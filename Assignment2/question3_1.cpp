#include <iostream>
using namespace std;
int main (){

    int a = 10; // integer varaible
    int * ptr = &a; // pointer to a variable
    int &ref = a ; // reference (alias)

    *ptr = 20; // modify using pointer

    cout << "After pointer modification: " << a << endl;

    ref = 30 ;
    cout << "After reference modification: " << a << endl;


    cout << *ptr <<endl;

    return 0;
}
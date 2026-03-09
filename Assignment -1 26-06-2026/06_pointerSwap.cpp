#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;

    int* px = &x;
    int* py = &y;
    int* pz = &z;

    // Before swap
    cout << "Before Swap:\n";
    cout << "x = " << *px << ", y = " << *py << ", z = " << *pz << endl;

    cout << "Addresses:\n";
    cout << "px = " << px << endl;
    cout << "py = " << py << endl;
    cout << "pz = " << pz << endl;

    // Swap x and z using only pointer dereferencing
    int temp = *px;
    *px = *pz;
    *pz = temp;

    // After swap
    cout << "\nAfter Swap:\n";
    cout << "x = " << *px << ", y = " << *py << ", z = " << *pz << endl;

    cout << "Addresses:\n";
    cout << "px = " << px << endl;
    cout << "py = " << py << endl;
    cout << "pz = " << pz << endl;

    return 0;
}
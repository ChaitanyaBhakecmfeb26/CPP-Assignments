#include <iostream>
using namespace std;

// Function Prototype
void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {
    int x = 15, y = 7, z = 22;
    int lo, hi;   // Variables to store min and max

    // Function call
    findMinMax(x, y, z, lo, hi);

    // Printing results
    cout << "Numbers: " << x << ", " << y << ", " << z << endl;
    cout << "Minimum value: " << lo << endl;
    cout << "Maximum value: " << hi << endl;

    // Verifying original variables updated
    cout << "\nAfter function call:" << endl;
    cout << "lo = " << lo << ", hi = " << hi << endl;

    return 0;
}

// Function Definition
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {

    // Assume first number is both min and max
    minVal = a;
    maxVal = a;

    // Compare with second number
    if (b < minVal)
        minVal = b;
    if (b > maxVal)
        maxVal = b;

    // Compare with third number
    if (c < minVal)
        minVal = c;
    if (c > maxVal)
        maxVal = c;
}
#include <iostream>
using namespace std;

// Function prototypes
int absolute(int n);
int clamp(int val, int lo, int hi);

int main() {

    // Test cases
    int vals[] = {-15, 0, 25, -3};
    int los[]  = {-10, -10, -10, 0};
    int his[]  = {10, 10, 10, 5};

    cout << "val\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < 4; i++) {
        cout << vals[i] << "\t"
             << los[i] << "\t"
             << his[i] << "\t"
             << absolute(vals[i]) << "\t\t"
             << clamp(vals[i], los[i], his[i]) << endl;
    }

    return 0;
}

// Absolute value using ternary only
int absolute(int n) {
    return (n < 0) ? -n : n;
}

// Clamp using nested ternary only
int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo :
           (val > hi) ? hi :
           val;
}
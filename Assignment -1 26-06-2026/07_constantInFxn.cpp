#include <iostream>
#include <iomanip>
using namespace std;

// Global constant
const float PI = 3.14159f;

// Function Prototypes
float circleArea(float radius);
float circlePerimeter(float radius);

int main() {

    float radius = 7.0f;

    float area = circleArea(radius);
    float perimeter = circlePerimeter(radius);

    cout << fixed << setprecision(4);
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    // Attempt to modify const variable
    // PI = 3.0f; 
    // Compiler Error:
    // error: assignment of read-only variable 'PI'

    return 0;
}

// Function Definitions

float circleArea(float radius) {
    return PI * radius * radius;
}

float circlePerimeter(float radius) {
    return 2 * PI * radius;
}
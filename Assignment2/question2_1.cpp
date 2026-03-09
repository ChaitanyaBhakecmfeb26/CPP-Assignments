#include <iostream>
using namespace std;

// Pass by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Pass by address (pointer)
void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Pass by reference (&)
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 10, y = 20;

    // Resetting before each call
    x = 10;
    y = 20;
    swapByValue(x, y);
    cout << "After swapByValue: " << x << " " << y << endl; // 10 20

    x = 10;
    y = 20;
    swapByAddress(&x, &y);
    cout << "After swapByAddress: " << x << " " << y << endl; // 20 10

    x = 10;
    y = 20;
    swapByReference(x, y);
    cout << "After swapByReference: " << x << " " << y << endl; // 20 10

    return 0;
}
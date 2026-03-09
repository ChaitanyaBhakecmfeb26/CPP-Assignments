#include <iostream>

using namespace std;

class Box
{

private:
    int length;
    int width;
    int height;

public:
    // Parameterized Constructor
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Using this pointer for
    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    // Volume function
    int volume()
    {
        return length * width * height;
    }
};

int main()
{

    // Initilizing using constructor
    Box b1(1, 2, 3);

    cout << "Volume using constructor values:  " << b1.volume() << endl;

    // Assignment using  setDimensions()
    b1.setDimensions(4, 5, 6);

    cout << "volume after setDimensions():" << b1.volume() << endl;

    return 0;
}
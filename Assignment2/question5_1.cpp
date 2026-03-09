#include <iostream>
#include <string>

using namespace std;

class Student
{

private:
    int rollNo;
    string name;
    int marks;

public:

    //Default constructor
    Student() : rollNo(0), name(""), marks(0) {}

    //Parameterized Constructor
    Student(int rollNo, string name, int marks) : rollNo(rollNo), name(name), marks(marks) {}

    //Constructor using this pointer
    Student(int roll , int name , int marks){
        this->rollNo = roll;
        this->name =  name;
        this-> marks = marks;
    }

    //Function to print student details 

    void printStudentDetails (){
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{

    //One object using default constructor
    Student s1;

    //Two Objects using parameterized constructor
    Student s2 (1, "Chaitanya" , 30);
    Student s3 (2, "Rahul" , 50);

    s1.printStudentDetails();
    s2.printStudentDetails();
    s3.printStudentDetails();

    return 0;
}
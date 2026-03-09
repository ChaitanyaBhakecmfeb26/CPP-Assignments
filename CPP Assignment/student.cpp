#include <iostream>
#include <string>
using namespace std;

class Student
{

private:
    string name;
    int rollNumber;
    float marks;
    char grade;
    bool isDataEntered;

public:
    Student()
    {
        name = "";
        rollNumber = 0;
        marks = 0;
        grade = 'N';
        isDataEntered = false;
    }

    // Name
    string getName()
    {
        return name;
    };
    void setName(string n)
    {
        this->name = n;
    };

    // RollNo
    int getRollNo()
    {
        return rollNumber;
    };

    void setRollNo(int rollNo)
    {
        this->rollNumber = rollNo;
    };

    // Marks
    float getMarks()
    {
        return marks;
    };

    void setMarks(float marks)
    {
        this->marks = marks;
        isDataEntered = true;
    };

    // Grade
    char getGrade()
    {
        return grade;
    };

    char calculateGrade()
    {

        if (!isDataEntered)
        {
            cout << "Please enter student information first!\n";
            return grade;
        }

        if (marks >= 90 && marks <= 100)
        {
            grade = 'A';
        }
        else if (marks >= 80)
        {
            grade = 'B';
        }
        else if (marks >= 70)
        {
            grade = 'C';
        }
        else if (marks >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        return grade;
    };

    bool dataEntered()
    {
        return isDataEntered;
    }
};

int main()
{

    Student s1;

    int choice;

    do
    {

        cout << "\n ---- Menu ---- \n";
        cout << "1. Accept Information\n";
        cout << "2. Display Information\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int roll;
            float marks;
            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Roll Number: ";
            cin >> roll;

            cout << "Enter Marks: ";
            cin >> marks;

            s1.setName(name);
            s1.setRollNo(roll);
            s1.setMarks(marks);

            cout << "Information saved successfully!" << endl;
            break;
        }

        case 2:
        {
            if (!s1.dataEntered())
            {
                cout << "Please enter information first!" << endl;
            }
            else
            {
                cout << "Name: " << s1.getName() << endl;
                cout << "Roll No: " << s1.getRollNo() << endl;
                cout << "Marks: " << s1.getMarks() << endl;
                cout << "Grade: " << s1.getGrade() << endl;
            }
            break;
        };

        case 3:
        {
            if (!s1.dataEntered())
            {
                cout << "Please enter information first!" << endl;
            }
            else
            {
                cout << "Grade Calulate: " << s1.calculateGrade() << endl;
            }
            break;
        };

        case 4:
        {
            cout << "Exiting Program...." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice!" << endl;
        }
        }

    } while (choice != 4);

    return 0;
}

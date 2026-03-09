#include <iostream>
#include <string>

using namespace std;

class Employee
{

private:

    static int idCounter;
    int empId;
    string empName;
    double empSalary;

public:
    Employee() : empId(0),
                 empName(""),
                 empSalary(0) {}

    int getEmployeeId()
    {
        return empId;
    }

    void setEmpId()
    {
        this->empId = ++idCounter;
    }

    string getEmployeeName()
    {
        return empName;
    }

    void setEmpName(string name)
    {
        this->empName = name;
    }

    double getEmpSalary()
    {
        return empSalary;
    }

    void setEmpSalary(double salary)
    {
        this->empSalary = salary;
    }

    double calculateGrossSalary()
    {
        double gross = this->empSalary;
        if (empSalary <= 5000)
        {
            gross += empSalary * 0.10;
        }
        else if (empSalary > 5000 && empSalary <= 10000)
        {
            gross += empSalary * 0.15;
        }
        else
        {
            gross += empSalary * 0.20;
        }

        return gross;
    }

    void displayEmployeeDetails()
    {
        cout << "======" << endl;
        cout << "Employee Id : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Employee Salary : " << empSalary << endl;
        cout << "Gross Salary : " << calculateGrossSalary() << endl;
        cout << "======" << endl;
    }

    void updateEmployeeDetails(string name, double salary)
    {

        if (this->empName != name)
        {
            setEmpName(name);
            cout << "Name updated successfully!" << endl;
        }
        else
        {
            cout << "Invalid data or Same name enetered" << endl;
        }

        if (this->empSalary != salary)
        {
            setEmpSalary(salary);
            cout << "Salary updated successfully!" << endl;
        }
        else
        {
            cout << "Invalid data or Same salary entered" << endl;
        }
    }
};

int Employee::idCounter = 0;

int main()
{

    Employee E1;
    int choice;

    do
    {
        cout << "--- Menu ---" << endl;
        cout << "1. Add a new employee" << endl;
        cout << "2. Calulate gross salary" << endl;
        cout << "3. Display employee details" << endl;
        cout << "4. Update Employee Information" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice " << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            double salary;
            cout << "Enter employee name and salary" << endl;
            cin >> name >> salary;
            E1.setEmpId();
            E1.setEmpName(name);
            E1.setEmpSalary(salary);
            cout << " New employee added successfully" << endl;
            break;
        };
        case 2:
        {
            if (E1.getEmployeeName() == "")
            {
                cout << "Add Employee First!" << endl;
                break;
            }
            else
            {
                cout << E1.calculateGrossSalary() << endl;
                break;
            }
        };
        case 3:
        {
            if (E1.getEmployeeName() == "")
                cout << "Add Employee First!" << endl;
            else
                E1.displayEmployeeDetails();
            break;
        };
        case 4:
        {
            string name;
            double salary;
            cout << "Enter new name: ";
            cin >> name;

            cout << "Enter new salary: ";
            cin >> salary;

            E1.updateEmployeeDetails(name, salary);
            break;
        };
        case 5:
        {
            cout << "Exitiing Program" << endl;
            break;
        };
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    while (choice != 5);

    return 0;
}
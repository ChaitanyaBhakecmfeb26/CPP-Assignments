#include <iostream>
using namespace std;

class TollBooth
{

private:
    int totalVehicles;
    double totalRevenue;
    int tollAmountCar;
    int tollAmountTruck;
    int tollAmountBus;

public:
    TollBooth() : totalVehicles(0),
                  totalRevenue(0),
                  tollAmountCar(180),
                  tollAmountTruck(300),
                  tollAmountBus(350) {}

    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout << "Booth statistics reset successfully" << endl;
    };

    void vehiclePayingTool(int vehicleType)
    {
        if (vehicleType == 1) // Car
        {
            totalVehicles++;
            totalRevenue += tollAmountCar;
            cout << "Car Toll Collected!"<<endl;
        }
        else if (vehicleType == 2) // Truck
        {
            totalVehicles++;
            totalRevenue += tollAmountTruck;
            cout << "Truck Toll Collected!"<<endl;
        }
        else if (vehicleType == 3) // Bus
        {
            totalVehicles++;
            totalRevenue += tollAmountBus;
            cout << "Bus Toll Collected!" <<endl;
        }
        else
        {
            cout << "Invalid vehicle type!" <<endl;
        }
    };

    int getTotalVehicles()
    {

        return totalVehicles;
    }

    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{

    TollBooth t1;

    int choice;

    do
    {

        cout << "--- Menu ---" <<endl;
        cout << "1.Add a standard car and collect toll" <<endl;
        cout << "2.Add a truck and collect toll" <<endl;
        cout << "3.Add a bus and collect toll" <<endl;
        cout << "4.Display total cars passed" <<endl;
        cout << "5.Display total revenue collected" <<endl;
        cout << "6.Reset  booth statistics" <<endl;
        cout << "7.Exit" <<endl;

        cout << "Enter your choice: " <<endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            t1.vehiclePayingTool(1);
            break;
        };
        case 2:
        {
            t1.vehiclePayingTool(2);
            break;
        };
        case 3:
        {
            t1.vehiclePayingTool(3);
            break;
        };
        case 4:
        {
            cout << "Total Cars Passed: " << t1.getTotalVehicles() << endl;
            break;
        };
        case 5:
        {
            cout << "Total Revenue Collected: " << t1.getTotalRevenue() << endl;
            break;
        };
        case 6:
        {
            t1.reset();
            break;
        };
        case 7:
        {
            cout << "Exiting Program...." << endl;
            break;
        };
        default:
        {
            {
                cout << "Invalid choice!" << endl;
            }
        }
        }
    } while (choice != 7);

    return 0;
}
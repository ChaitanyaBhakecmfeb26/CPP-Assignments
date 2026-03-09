#include <iostream>

#include <string>

using namespace std;

class BankAccount
{

private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        accountHolderName = "";
        balance = 0.0;
    }

    void setAccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }

    void setAccountHolderName(string accHolder)
    {
        this->accountHolderName = accHolder;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    void setBalance(float balance)
    {
        this->balance = balance;
    }

    float getBalance()
    {
        return balance;
    }

    void depositMoney(float amount)
    {

        balance += amount;
    }

    void withdrawMoney(float amount)
    {

        if (balance < amount)
        {
            cout << "Funds not sufficient" <<endl;
        }
        else
        {
            balance -= amount;
        }
    }

    void displayAccountDetails()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{

    BankAccount B1;

    int accNo;
    string name;
    int choice;
    double amount;

    cout<< "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    B1.setAccountNumber(accNo);
    B1.setAccountHolderName(name);
    B1.setBalance(0.0);

    do
    {
        cout << "---Menu---" << endl;
        cout << "1.Deposit Money into your account" <<endl;
        cout << "2.Withdraw Money from your account" <<endl;
        cout << "3.Display Account Details"<<endl;
        cout << "4.Exit" <<endl;
        cin >> choice;

        switch (choice){
            case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            B1.depositMoney(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            B1.withdrawMoney(amount);
            break;

        case 3:
            B1.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

            default :{
                cout << "Invalid Choice!"<<endl;
            }
        }



    } while (choice !=4);

    return 0;
}
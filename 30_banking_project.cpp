#include <iostream>
#include <iomanip> // precision for floating numbers

using std::cin;
using std::cout;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        cout << "==================\n";
        cout << "Enter your choice:\n";
        cout << "==================\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice;

        cin.clear();   // reset error flags if system failed to interpret
        fflush(stdin); // this combo will prevent our program from going crazy

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
        case 4:
            cout << "Thanks for visiting!\n";
            break;
        default:
            cout << "Invalid choice.";
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
    // std::fixed forces decimal notation (not scientific)
    // std::setprecision(2) limits output to 2 digits after the decimal
}
double deposit()
{
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "That's not a valid amount\n";
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to be witdrawn: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "That's not a valid amountn\n";
        return 0;
    }
    else
    {
        return amount;
    }
}
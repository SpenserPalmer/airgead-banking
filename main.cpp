#include <iostream>
#include <limits>
#include "Investment.h"

using namespace std;

int main() {
    Investment inv;

    cout << "===================================\n";
    cout << " Welcome to the Airgead Banking App\n";
    cout << "===================================\n";

    //initial invesement
    double initialAmount;
    do {
        cout << "\nEnter your initial investment amount: $";
        cin >> initialAmount;
        if (cin.fail() || initialAmount <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (cin.fail() || initialAmount <= 0);
    inv.SetInitialAmount(initialAmount);

    //monthly deposit
    double monthlyDeposit;
    do {
        cout << "Enter your monthly deposit: $";
        cin >> monthlyDeposit;
        if (cin.fail() || monthlyDeposit < 0) {
            cout << "Invalid input. Please enter a number >= 0.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (cin.fail() || monthlyDeposit < 0);
    inv.SetMonthlyDeposit(monthlyDeposit);

    // annual interest rate
    double annualInterest;
    do {
        cout << "Enter your annual interest rate (in %): ";
        cin >> annualInterest;
        if (cin.fail() || annualInterest < 0) {
            cout << "Invalid input. Please enter a non-negative number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (cin.fail() || annualInterest < 0);
    inv.SetAnnualInterest(annualInterest);

    // number of years
    int numYears;
    do {
        cout << "Enter the number of years: ";
        cin >> numYears;
        if (cin.fail() || numYears <= 0) {
            cout << "Invalid input. Please enter a number greater than 0.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (cin.fail() || numYears <= 0);
    inv.SetNumYears(numYears);

    // display reports
    inv.PrintReportWithoutMonthlyDeposits();
    inv.PrintReportWithMonthlyDeposits();

    return 0;
}

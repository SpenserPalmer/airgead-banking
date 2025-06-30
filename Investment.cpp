#include "Investment.h"
void Investment::SetInitialAmount(double amount) {
    initialAmount = amount;
}

void Investment::SetMonthlyDeposit(double deposit) {
    monthlyDeposit = deposit;
}

void Investment::SetAnnualInterest(double interest) {
    annualInterest = interest;
}

void Investment::SetNumYears(int years) {
    numYears = years;
}

void Investment::PrintReportWithoutMonthlyDeposits() {
    double total = initialAmount;
    cout << "\n  Balance and Interest Without Additional Monthly Deposits  \n";
    cout << "============================================================\n";
    cout << "  Year          Year End Balance    Year End Earned Interest\n";
    cout << "------------------------------------------------------------\n";

    for (int i = 1; i <= numYears; ++i) {
        double interestEarned = total * (annualInterest / 100);
        total += interestEarned;
        cout << "   " << setw(4) << i << "          $" << setw(12) << fixed << setprecision(2) << total
            << "          $" << setw(10) << interestEarned << endl;
    }
}

void Investment::PrintReportWithMonthlyDeposits() {
    double total = initialAmount;
    cout << "\n   Balance and Interest With Additional Monthly Deposits   \n";
    cout << "============================================================\n";
    cout << "  Year          Year End Balance    Year End Earned Interest\n";
    cout << "------------------------------------------------------------\n";

    for (int i = 1; i <= numYears; ++i) {
        double yearlyInterest = 0.0;
        for (int j = 0; j < 12; ++j) {
            double monthlyInterest = (total + monthlyDeposit) * ((annualInterest / 100) / 12);
            yearlyInterest += monthlyInterest;
            total += monthlyDeposit + monthlyInterest;
        }
        cout << "   " << setw(4) << i << "          $" << setw(12) << fixed << setprecision(2) << total
            << "          $" << setw(10) << yearlyInterest << endl;
    }
}

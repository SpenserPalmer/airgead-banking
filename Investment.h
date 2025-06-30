#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Investment {
private:
    double initialAmount;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Setters
    void SetInitialAmount(double amount);
    void SetMonthlyDeposit(double deposit);
    void SetAnnualInterest(double interest);
    void SetNumYears(int years);

    // Report Functions
    void PrintReportWithoutMonthlyDeposits();
    void PrintReportWithMonthlyDeposits();
};



#include <iomanip>
#include <iostream>
#include "bank.h"
using namespace std;

bank::bank(double investment, double monthDeposit,

    double rate, int years) {
    this->initialDeposit = investment;
    this->monthlyDeposit = monthDeposit;
    this->interestRate = rate;
    this->numOfYears = years;

}

bank::~bank() { //destruct bank

}


void bank::withoutMonthlyDeposit() {  //it will calculate without diposit 

    cout << "   Balance and Interest without additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;

    cout << setw(10) << "Year"
        << setw(20) << "Year-End-Balance"
        << setw(35) << "Year-End-interest"<< endl;

    cout << "--------------------------------------------------------------------------" << endl;

    int currentyear = 1;
    double yearendBalance = this->initialDeposit;

    while (currentyear <= this->numOfYears) {
        //Calculate interest
        double interestearned = yearendBalance * this->interestRate / 100;
        //Add it to year end Balance
        yearendBalance += interestearned;
        //Print the results for each year
        cout << right << setw(10) << currentyear << fixed << setprecision(2)
            << setw(20) << yearendBalance
            << setw(35) << interestearned << endl;


        currentyear++;

    }

}////



void bank::withMonthlyDeposit() {  //this function will calculate with monthly deposit

    cout << "   Balance and Interest with additional $"<<monthlyDeposit << " Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << setw(10) << "Year"
        << setw(20) << "Year End Balance"
        << setw(35) << "Year End Interest" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    int currentyear = 1;
    double yearendBalance = this->initialDeposit;

    while (currentyear <= this->numOfYears) {
        int month = 1;
        double interestearned = 0.0;
        double monthendbalance = yearendBalance;

        while (month <= 12) {

            //Add monthly deposit
            monthendbalance += this->monthlyDeposit;
            //Calculate monthly interest, interest rate is for annual. so divide the rate by 12
            double monthlyinterest = monthendbalance * this->interestRate / (100 * 12);
            interestearned += monthlyinterest;
            monthendbalance += monthlyinterest;
            month++;

        }

        yearendBalance = monthendbalance;
        cout << right << setw(10) << currentyear << fixed << setprecision(2)
            << setw(20) << yearendBalance
            << setw(35) << interestearned << endl;
        currentyear++;

    }

}
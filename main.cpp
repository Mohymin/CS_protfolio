/*
Programmeer: Mohymin Islam
date of creation : 9-30-2021
Purpose: This program is designed to calculate the annual percentage of their savings year round.
Attachment: Two other file are also included, those are bank.cpp and bank.h
*/

#include <iostream>
#include <string>
#include "bank.h"
using namespace std;

int main()
{

    while (true){

        //display the initiative information that user need to input
        cout << "Initial Investment Amount:"<<endl;
        cout << "Monthly Deposit:" << endl;
        cout << "Annual Interest:" << endl;
        cout << "Numbers of Years:" << endl << endl;
        system("pause");

        //variable taht will be hold and use later.
        double investment, monthlydeposit, interestrate;
        int years;
        cout << "*************Input Values**************" << endl;
        cout << "Initial Investment Amount: $";
      
        cin >> investment;
        cout << "Monthly Deposit: $";
        cin >> monthlydeposit;
        cout << "Annual Interest: %";
        cin >> interestrate;
        cout << "Number of years: ";
        cin >> years;
        system("pause");

        bank totalSaving = bank(investment, monthlydeposit, interestrate, years);
        cout << endl;
        totalSaving.withoutMonthlyDeposit();        //call function to perfom operation and output.
        cout << endl;

        if (monthlydeposit > 0) {
            totalSaving.withMonthlyDeposit();       //call function to perform operation and outputc
        }


        //if user want another round
        cout << endl << "Do you want to try another calculation? (y/n): ";
        string choice;
      
        cin >> choice;
        if (choice != "y") {
            break;
        }
        cout << endl;
    }

	return 0;
}



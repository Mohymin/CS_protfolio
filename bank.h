#ifndef BANK_H_
#define BANK_H_

class bank {

public:

    bank(double investment, double monthDeposit, double rate, int years);
    virtual ~bank();
    void withoutMonthlyDeposit();
    void withMonthlyDeposit();
private:
    double initialDeposit;
    double monthlyDeposit;
    double interestRate;
    int numOfYears;
};
#endif

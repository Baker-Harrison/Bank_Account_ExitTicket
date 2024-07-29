//
// Created by thehe on 7/29/2024.
//

#ifndef BANK_ACCOUNT_EXITTICKET_BANKACCOUNT_H
#define BANK_ACCOUNT_EXITTICKET_BANKACCOUNT_H


class BankAccount {
private:
    double balance;
    int numberOfDeposits = 0;
    int numberOfWithdrawals = 0;
    double APR;
    double monthlyServiceCharges = 0;
public:
    // Constructors
    BankAccount(double balance, double APR);

    // Getters

    double getBalance();
    int getNumberOfDeposits();
    int getNumberOfWithdrawals();
    double getAPR();
    double getMonthyServiceCharges();

    // Setters
    void setBalance(double newBalance);
    void setNumberOfDeposits(int newNumberOfDeposits);
    void setNumberOfWithdrawals(int newNumberOfWithdrawals);
    void setAPR(double newAPR);
    void setMonthlyServiceCharges(double newMonthlyServiceCharges);

    // Actions

    virtual void deposit(double depositAmount);
    virtual void withdraw(double withdrawAmount);
    virtual void calcInt();
    virtual void monthlyProc();

};


#endif //BANK_ACCOUNT_EXITTICKET_BANKACCOUNT_H

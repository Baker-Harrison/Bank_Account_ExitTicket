//
// Created by thehe on 7/29/2024.
//

#ifndef BANK_ACCOUNT_EXITTICKET_SAVINGACCOUNT_H
#define BANK_ACCOUNT_EXITTICKET_SAVINGACCOUNT_H


#include "BankAccount.h"

class SavingAccount: public BankAccount {
private:
    bool status = getBalance() > 25;

public:
    SavingAccount(double balance, double APR);
    void deposit(double depositAmount) override;
    void withdraw(double withdrawAmount);
    void monthlyProc();
};


#endif //BANK_ACCOUNT_EXITTICKET_SAVINGACCOUNT_H

//
// Created by thehe on 7/29/2024.
//

#ifndef BANK_ACCOUNT_EXITTICKET_CHECKINGACCOUNT_H
#define BANK_ACCOUNT_EXITTICKET_CHECKINGACCOUNT_H

#include "BankAccount.h"
#include "SavingAccount.h"

class CheckingAccount  : public BankAccount{
public:
    CheckingAccount(double balance, double APR);

    void withdraw(double withdrawAmount) override;

    void monthlyProc() override;
};


#endif //BANK_ACCOUNT_EXITTICKET_CHECKINGACCOUNT_H

//
// Created by thehe on 7/29/2024.
//

#include <iostream>
#include "../include/CheckingAccount.h"



CheckingAccount::CheckingAccount(double balance, double APR) : BankAccount(balance, APR)
{

}


void CheckingAccount::withdraw(double withdrawAmount) {
    {
        if ((getBalance() - withdrawAmount) < 0)
        {
            setMonthlyServiceCharges(getMonthyServiceCharges() + 15);
        }
        else
        {
            BankAccount::withdraw(withdrawAmount);
        }
    }
}

void CheckingAccount::monthlyProc() {
    setMonthlyServiceCharges(getMonthyServiceCharges() + (5 + getNumberOfWithdrawals() * .10));
    std::cout << "Monthly Service Charges: " << getMonthyServiceCharges() << std::endl;
    BankAccount::monthlyProc();
}
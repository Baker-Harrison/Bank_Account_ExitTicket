//
// Created by thehe on 7/29/2024.
//

#include "../include/SavingAccount.h"
#include <iostream>

using namespace  std;


SavingAccount::SavingAccount(double balance, double APR)
        : BankAccount(balance, APR)
{

}


void SavingAccount::deposit(double depositAmount)
{
if (status)
{
BankAccount::deposit(depositAmount);
}
else if ((depositAmount + getBalance()) > 25)
{
BankAccount::deposit(depositAmount);
status = true;
}
else
{
    cout << "Account inactive, can't deposit" << endl;
}
}

void SavingAccount::withdraw(double withdrawAmount) {
    if (status)
    {
        BankAccount::withdraw(withdrawAmount);
    }
    else
    {
        cout << "Actived inactive, can't withdraw" << endl;
    }
}

void SavingAccount::monthlyProc()
{
    if (getNumberOfWithdrawals() > 4)
    {
        BankAccount::setMonthlyServiceCharges(getNumberOfWithdrawals() - 4);
        if (getBalance() < 25)
        {
            status = false;
        }
    }
    std::cout << "Monthly Service Charges: " << getMonthyServiceCharges() << std::endl;
    BankAccount::monthlyProc();


}
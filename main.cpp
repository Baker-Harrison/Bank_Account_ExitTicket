#include <iostream>
#include "include/SavingAccount.h"
#include "include/BankAccount.h"
#include "include/CheckingAccount.h"


using namespace std;

int main() {
    string accountType;
    cout << "Enter the account you want (checking or savings): ";
    cin >> accountType;

    if (accountType == "checking")
    {
        CheckingAccount checkingAccount (100, 0.05);
        cout << "Beginning Balance : " << checkingAccount.getBalance() << endl;
        checkingAccount.withdraw(5);

        cout << "Total Number of Deposits : " << checkingAccount.getNumberOfDeposits() << endl
             << "Total Number of Withdrawals : " << checkingAccount.getNumberOfWithdrawals() << endl;
        checkingAccount.monthlyProc();
        cout << "Ending Balance : " << checkingAccount.getBalance() << endl;

    }
    else if (accountType == "savings")
    {
        SavingAccount savingsAccount (0, 0.05);
        cout << "Beginning Balance : " << savingsAccount.getBalance() << endl;
        savingsAccount.deposit(100);
        savingsAccount.withdraw(5);
        savingsAccount.withdraw(5);
        savingsAccount.withdraw(5);
        savingsAccount.withdraw(5);
        savingsAccount.withdraw(5);
        cout << "Total Number of Deposits : " << savingsAccount.getNumberOfDeposits() << endl
             << "Total Number of Withdrawals : " << savingsAccount.getNumberOfWithdrawals() << endl;
        savingsAccount.monthlyProc();
        cout << "Ending Balance : " << savingsAccount.getBalance() << endl;
    }

    return 0;
}

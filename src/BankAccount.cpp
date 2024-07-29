//
// Created by thehe on 7/29/2024.
//

#include "../include/BankAccount.h"


BankAccount::BankAccount(double balance, double APR)
{
    this->balance = balance;
    this->APR = APR;
}

double BankAccount::getBalance() {
    return balance;
}

int BankAccount::getNumberOfDeposits() {
    return numberOfDeposits;
}

int BankAccount::getNumberOfWithdrawals() {
    return numberOfWithdrawals;
}

double BankAccount::getAPR() {
    return APR;
}

double BankAccount::getMonthyServiceCharges() {
    return monthlyServiceCharges;
}

void BankAccount::setBalance(double newBalance) {
    balance = newBalance;
}

void BankAccount::setNumberOfDeposits(int newNumberOfDeposits) {
    numberOfDeposits = newNumberOfDeposits;
}

void BankAccount::setNumberOfWithdrawals(int newNumberOfWithdrawals) {
    numberOfWithdrawals = newNumberOfWithdrawals;
}



void BankAccount::setAPR(double newAPR) {
    APR = newAPR;
}

void BankAccount::setMonthlyServiceCharges(double newMonthlyServiceCharges) {
    monthlyServiceCharges = newMonthlyServiceCharges;
}


void BankAccount::deposit(double depositAmount) {
    balance += depositAmount;
    numberOfDeposits += 1;
}

void BankAccount::withdraw(double withdrawAmount) {
    balance -= withdrawAmount;
    numberOfWithdrawals += 1;
}

void BankAccount::calcInt() {
    double monthlyRate = (APR / 12);
    double monthlyInterest = balance * monthlyRate;
    balance += monthlyInterest;
}

void BankAccount::monthlyProc() {
    balance = balance - monthlyServiceCharges;
    calcInt();

    numberOfWithdrawals = 0;
    numberOfDeposits = 0;
    monthlyServiceCharges = 0;
}


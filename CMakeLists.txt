cmake_minimum_required(VERSION 3.28)
project(Bank_Account_ExitTicket)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bank_Account_ExitTicket main.cpp
        src/BankAccount.cpp
        include/BankAccount.h
        src/CheckingAccount.cpp
        include/CheckingAccount.h
        src/SavingAccount.cpp
        include/SavingAccount.h)

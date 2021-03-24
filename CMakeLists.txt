cmake_minimum_required(VERSION 3.20.0)

project(myProj)

add_executable(${PROJECT_NAME} main.cpp BankAccount/BankOneAccount/BankOneAccount.cpp BankAccount/BankTwoAccount/BankTwoAccount.cpp)


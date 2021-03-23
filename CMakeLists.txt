cmake_minimum_required(VERSION 3.20.0)

project(myProj)

add_executables(${PROJECT_NAME} main.cpp BankOneAccount.cpp BankTwoAccount.cpp)

add_subdirectory(BankAccount)

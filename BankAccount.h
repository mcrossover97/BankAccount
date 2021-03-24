#pragma once

#include <iostream>
#include <functional>

using loanFunction = std::function<void(double&)>;

class BankOneAccount {
    
public:       
    loanFunction makeLoanFunction();
    void setName(std::string), setSex(std::string), setAge(int);
    void setBalance(double), depo(double), setDept(double), setPunctualityGrade(std::string);
    void printName(), printSex(), printAge(), printBalance(), printDept(), printGrade();
    std::string getName(), getSex(), getGrade();
    int getAge();
    double getBalance(), getDept();
    void print(std::string), print(int), print(double);
private:
    std::string name, sex, punctualityGrade;
    int age;
    double balance, deposit, dept;

};
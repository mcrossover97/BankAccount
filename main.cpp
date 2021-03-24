#include <iostream>
#include "BankAccount/BankAccount.h"

int main() {
	double loanAmount = 1000;
	BankOneAccount MohammadBankAccount;
	MohammadBankAccount.setName("Mohammad");
	MohammadBankAccount.setAge(23);
	MohammadBankAccount.setSex("Male");
	double d = 30;
	MohammadBankAccount.setPunctualityGrade("A");
	MohammadBankAccount.setBalance(1000);
	MohammadBankAccount.setDept(0);
	double c = 30;
	MohammadBankAccount.depo(5);
	loanFunction MohammadLoan = MohammadBankAccount.makeLoanFunction();
	MohammadLoan(loanAmount);
	MohammadBankAccount.printName();
	MohammadBankAccount.printBalance();
	MohammadBankAccount.printDept();
	std::cout << "Goodbye, World!" <<std::endl;
}
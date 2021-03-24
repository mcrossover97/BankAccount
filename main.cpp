#include <iostream>
#include "BankAccount.h"

int main() {

	double loanAmount = 1000;
	BankOneAccount MohammadBankAccount;
	MohammadBankAccount.setName("Mohammad");
	MohammadBankAccount.setAge(23);
	MohammadBankAccount.setSex("Male");
	MohammadBankAccount.setPunctualityGrade("A");
	MohammadBankAccount.setBalance(1000);
	MohammadBankAccount.setDept(0);
	MohammadBankAccount.depo(5);
	loanFunction MohammadLoan = MohammadBankAccount.makeLoanFunction();
	MohammadLoan(loanAmount);
	MohammadBankAccount.printName();
	MohammadBankAccount.printBalance();
	MohammadBankAccount.printDept();
	
}
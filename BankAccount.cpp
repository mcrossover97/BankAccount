#include "BankAccount.h"

void BankOneAccount::setName(std::string n) { name = n; };
void BankOneAccount::setSex(std::string s) { sex = s; };
void BankOneAccount::setAge(int a) { age = a; };
void BankOneAccount::setBalance(double b) { balance = b; };
void BankOneAccount::setPunctualityGrade(std::string g) { punctualityGrade = g; };
void BankOneAccount::depo(double d) { balance = balance + d; };
void BankOneAccount::setDept(double d) { dept = d; };
void BankOneAccount::printName() { print(name); }
void BankOneAccount::printSex() { print(sex); }
void BankOneAccount::printAge() { print(age); };
void BankOneAccount::printBalance() { print(balance); };
void BankOneAccount::printDept() { print(dept); };
void BankOneAccount::printGrade() { print(punctualityGrade); };
std::string BankOneAccount::getName() { return name; }
std::string BankOneAccount::getSex() { return sex; }
int BankOneAccount::getAge() { return age; }
double BankOneAccount::getBalance() { return balance; }
double BankOneAccount::getDept() { return dept; }
std::string BankOneAccount::getGrade() { return punctualityGrade; }

void BankOneAccount::print(std::string a) { std::cout << a << '\n'; }
void BankOneAccount::print(int a) { std::cout << a << '\n'; }
void BankOneAccount::print(double a) { std::cout << a << '\n'; }

loanFunction BankOneAccount::makeLoanFunction() {
	if (punctualityGrade == "A") {
		double coeff = 1.05;
	} else {
		double coeff = 1.15;
	}

	loanFunction theFunc = [=](const double loanAmount) mutable {
		dept -= 1.05 * loanAmount;
		balance +=  loanAmount;
	};
	return theFunc;
}
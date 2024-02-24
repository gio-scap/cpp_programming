#include "Saving_Account.h"
#include <iostream>

Saving_Account::Saving_Account()
:int_rate{0.03} {}

Saving_Account::~Saving_Account() {}

void Saving_Account::deposit(double amount) {
  std::cout << "Savings Account deposti called with " << amount << std::endl;
}

void Saving_Account::withdraw(double amount) {
  std::cout << "Saving Account withdraw called with " << amount << std::endl;
}

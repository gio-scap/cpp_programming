#include "Accounts/Accounts.h"

double Account::get_balance() { return _balance; }

void Account::set_balance(double bal) {
  _balance = bal;
  std::cout << "the new balance is " << _balance << std::endl;
}

void Account::set_name(std::string name_) { _name = name_; }

bool Account::deposite(double amount) {
  _balance += amount;
  return true;
}

bool Account::withdraw(double amount) {
  if (_balance >= amount) {
    _balance -= amount;
    return true;
  } else {
    std::cout << "not enough money" << std::endl;
    return false;
  }
}

// Constructors
Account::Account() {
  _name = "None";
  _balance = 0.0;
}

Account::Account(std::string name_, double balance_) {
  _name = name_;
  _balance = balance_;
}

Account::Account(double balance_) { _balance = balance_; }
Account::Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {
 private:
  double _balance;
  std::string _name;

 public:
  void set_balance(double bal);
  double get_balance();
  void set_name(std::string name_);
  bool deposite(double amount);
  bool withdraw(double amount);

  // cnst
  Account();
  Account(std::string name, double balance);
  //Account(std::string name);
  Account(double balance);

  // Deconstructor
  //~Account();
};

#endif
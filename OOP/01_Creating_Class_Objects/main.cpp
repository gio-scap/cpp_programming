#include <iostream>

#include "Accounts/Accounts.h"

int main() {
  Account Paolo;
  Paolo.set_balance(10000);

  std::cout << "the balance is :" << Paolo.get_balance() << std::endl;

  if (Paolo.withdraw(100)) {
    std::cout << "withdraw OK, the new balance is : " << Paolo.get_balance()
              << std::endl;
  }
};
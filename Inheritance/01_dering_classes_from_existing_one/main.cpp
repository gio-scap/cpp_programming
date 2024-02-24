#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

int main(int, char**){
    std::cout << "Hello, from Inheritance!\n";

    Account acc{};
    acc.deposit(1000);
    std::cout << acc.name << "\n";
    Saving_Account sav_acc{};
    sav_acc.deposit(30);
}

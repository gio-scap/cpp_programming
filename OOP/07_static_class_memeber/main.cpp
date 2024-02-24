#include <iostream>

#include "Static.cpp"

int main() {
  Static A{10};
  Static B{0};
  std::cout << B.get_num_of_object() << "\n";
}
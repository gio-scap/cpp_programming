#include <iostream>

#include "Myclass.cpp"
int main() {
  const Myclass A{10};
  std::cout << A.get_value() << "\n";
}

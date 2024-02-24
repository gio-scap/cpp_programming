#include <iostream>

#include "Mystring.h"

int main() {
  Mystring empty;
  Mystring larry("Larry");
  Mystring stooge{larry};

  empty.display();
  larry.display();
  stooge.display();

  // ! assignment operator
  empty = larry;

  std::cout << "\n Copy vs Move assignement operator \n";

  Mystring s1 = larry;  // copy cnstr since larry is l-ref
  Mystring s2;
  s2 = {"pierino"};  // move cnstr

  // Unary operator

  std::cout << "\n Unary operator \n";

  s2 = Mystring{"PAOLO"};

  std::cout << "in lower case: " << (-s2).get_str()
            << ", while s2 is still Capital: " << s2.get_str() << "\n";

  std::cout << "\n binary operator\n";

  std::cout << (larry + s2) << "\n";

  return 0;
}

#include <iostream>

#include "src/gatto.cpp"

void tell_cat_name_value(gatto gatto_) {
  std::cout << "the name of the cat is: " << gatto_.get_name() << std::endl;
}

void tell_cat_name_ref(gatto& gatto_) {
  std::cout << "the name of the cat by reference is " + gatto_.get_name()
            << std::endl;
}

int main() {
  gatto boo("boo", 2);

  tell_cat_name_value(boo);
  tell_cat_name_ref(boo);
}

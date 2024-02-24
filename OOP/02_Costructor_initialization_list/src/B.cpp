#include <iostream>
#include <string>

class B {
 private:
  double _number;
  std::string _name;

 public:
  B() {
    _number = -1;
    _name = "none";
    std::cout << "assignment, not initialization" << std::endl;
  }
};
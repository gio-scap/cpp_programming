#include <iostream>
#include <string>

class C {
 private:
  std::string _name;
  int _number;

 public:
  // Default parameter constructor

  C(std::string name_ = "No name", int number_ = -1){};
};
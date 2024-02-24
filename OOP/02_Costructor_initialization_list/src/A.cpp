#include <iostream>
#include <string>

// constructor initialization list

class A {
 private:
  double _number;
  std::string _name;

 public:
  // one single constructor that can be called by other constructor
  A(std::string name_, double number_) : _name{name_}, _number{number_} {
    std::cout << "2 input constructor called" << std::endl;
  }

  A() : A{"", -1} { std::cout << "empty constructor done" << std::endl; }

  A(std::string name_) : A{name_, -1} {
    std::cout << "name only constructor done";
  }
};
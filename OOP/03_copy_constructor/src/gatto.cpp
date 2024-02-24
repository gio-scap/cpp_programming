#include <iostream>
#include <string>

class gatto {
 private:
  std::string _name;
  int _age;

 public:
  const std::string get_name() { return _name; }

  // constructor
  gatto(std::string name_ = "no name assigned", int age_ = 0)
      : _name{name_}, _age{age_} {
    std::cout << "A cat named " + _name + " of age: " << _age
              << " has been created" << std::endl;
  };

  // copy constructor

  gatto(const gatto &that) : _name{that._name}, _age{that._age} {
    std::cout << "copy constructor callded" << std::endl;
  }
};

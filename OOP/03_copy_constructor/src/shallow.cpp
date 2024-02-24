#include <iostream>

class Shallow {
 private:
  int* data;

 public:
  Shallow(int d) {
    data = new int;
    *data = d;
  }  // constructor

  ~Shallow() {
    delete data;
    std::cout << "destructor freeing data" << std::endl;
  }

  // copy cnstr
  Shallow(const Shallow& other) : data(other.data) {
    std::cout << "Copy constructor - shallow" << std::endl;
  }

  void disp_data_value() { std::cout << data << std::endl; }
};

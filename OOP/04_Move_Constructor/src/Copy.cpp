#include "Copy.h"

#include <iostream>

Copy::Copy(int d) {
  data = new int;
  *data = d;
  std::cout << "constructor for " << *data << " called\n";
}

Copy::Copy(const Copy& source) {
  data = new int;
  *data = *(source.data);
  std::cout << "deep copy constructor for " << *data << " called \n";
}

Copy::~Copy() {
  std::cout << "destructor freeing data for " << *data << "\n";
  delete data;
}

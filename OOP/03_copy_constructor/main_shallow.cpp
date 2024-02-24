#include <iostream>

#include "src/shallow.cpp"

int main() {
  Shallow obj1{100};

  obj1.disp_data_value();
  {
    Shallow obj2{obj1};

    obj2.disp_data_value();
  }  // also the original obj1 data is deleted! program will crash

  return 0;
}
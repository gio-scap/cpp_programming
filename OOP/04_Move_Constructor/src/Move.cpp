#include "Move.h"

#include <iostream>

void Move::set_value(int d) { *data = d; }

int Move::get_value() { return *data; }

Move::Move(int d) {
  data = new int;
  *data = d;
  std::cout << "constructor for " << *data << " called\n";
}

Move::Move(const Move& source) {
  data = new int;
  *data = *(source.data);
  std::cout << "deep copy constructor for " << *data << " called \n";
}

Move::~Move() {
  if (data == nullptr) {
    std::cout << "destructor freeing data for nullptr"
              << "\n";
  } else {
    std::cout << "destructor freeing data for " << *data << "\n";
  }
  delete data;
}

Move::Move(Move&& source) noexcept : data{source.data} {
  source.data = nullptr;
  std::cout << "Move constructor for " << *data << " called\n";
};

#include "Mystring.h"

#include <cstring>
#include <iostream>

Mystring::Mystring() : _str{nullptr} {
  _str = new char[1];
  *_str = '\0';
};

Mystring::Mystring(const char* str_) : _str{nullptr} {
  if (str_ == nullptr) {
    _str = new char[1];
    *_str = '\0';
  } else {
    _str = new char[std::strlen(str_) + 1];
    std::strcpy(_str, str_);
  }
}

Mystring::Mystring(const Mystring& source) : _str{nullptr} {
  _str = new char[std::strlen(source._str) + 1];
  std::strcpy(_str, source._str);
  std::cout << "deep copy constr" << std::endl;
}

Mystring::~Mystring() { delete[] _str; }

// * getter methods

void Mystring::display() const {
  std::cout << _str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(_str); }
const char* Mystring::get_str() const { return _str; }

// ! operator overloading

Mystring& Mystring::operator=(const Mystring& rhs) {
  std::cout << "copy = constructor called\n";

  if (this == &rhs) return *this;

  delete[] _str;
  _str = new char[std::strlen(rhs._str) + 1];
  std::strcpy(_str, rhs._str);

  return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) {
  std::cout << "move = constructor called\n";

  if (this == &rhs) {
    return *this;
  }
  delete[] _str;
  _str = rhs._str;
  rhs._str = nullptr;

  return *this;
}

// Mystring Mystring::operator-() const {
// char* buff = new char[std::strlen(_str) + 1];

// std::strcpy(buff, _str);

// for (size_t i = 0; i < std::strlen(buff); i++) {
//   buff[i] = std::tolower(buff[i]);
// }

// Mystring temp{buff};
// delete[] buff;
// return temp;
// }

bool Mystring::operator==(const Mystring& rhs) const {
  if (std::strcmp(_str, rhs._str)) {
    return true;
  } else {
    return false;
  }
}

Mystring Mystring::operator+(const Mystring& rhs) const {
  size_t buff_size = std::strlen(_str) + std::strlen(rhs._str) + 1;
  char* buff = new char[buff_size];
  std::strcpy(buff, _str);
  std::strcat(buff, rhs._str);

  Mystring temp{buff};
  delete[] buff;
  return temp;
}

// external function operator overloading

// this does the same as the memeber operator
Mystring operator-(const Mystring& obj) {
  char* buff = new char[std::strlen(obj._str) + 1];
  std::strcpy(buff, obj._str);

  for (size_t i = 0; i < std::strlen(buff); i++) {
    buff[i] = std::tolower(buff[i]);
  }
  Mystring temp{buff};

  delete[] buff;
  return temp;
}

std::ostream& operator<<(std::ostream& os, const Mystring& rhs) {
  os << rhs._str;
  return os;
};

std::istream& operator>>(std::istream& is, Mystring& rhs) {
  char* buffer = new char[1000];
  is >> buffer;

  rhs = Mystring{buffer};
  delete[] buffer;
  return is;
};
#pragma once

#include <iostream>

class Mystring {
  friend Mystring operator-(
      const Mystring& obj);  // friend operator overloading
  friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
  friend std::istream& operator>>(
      std::istream& is, Mystring& rhs);  // rhs is going to be modified

 private:
  char* _str;

 public:
  Mystring();
  Mystring(const char* str_);
  Mystring(const Mystring& source);
  ~Mystring();

  void display() const;
  int get_length() const;
  const char* get_str() const;

  // ! operato =r overloading
  Mystring& operator=(const Mystring& rhs);
  Mystring& operator=(Mystring&& rhs);

  // ! unary operator

  // Mystring operator-() const;  // return a string in lowercase
  bool operator==(const Mystring& rhs) const;
  Mystring operator+(const Mystring& rhs) const;
};

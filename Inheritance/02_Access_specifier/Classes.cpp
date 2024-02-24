#include <iostream>

using namespace std;

class Base {
 public:
  int a{0};
  void display() { cout << a << ", " << b << ", " << c << endl; }

  Base() { cout << "Base consturctor" << endl; }

 protected:
  int b{0};

 private:
  int c{0};
};

class Derived : public Base {
 public:
  Derived() { cout << "Derived constructor" << endl; }
};

// namespace std;

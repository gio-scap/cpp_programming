#include "src/A.cpp"
#include "src/B.cpp"
#include "src/C.cpp"

int main() {
  A obj01;
  B obj02;

  A obj3("tonio");
  A("tonio", 10);

  C{"object of type C"};

  return 0;
}
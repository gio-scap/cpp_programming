#include "src/deep.cpp"

int main() {
  deep obj1{100};
  {
    deep obj2{obj1};
    display_data(obj1);
    display_data(obj2);
  }

  display_data(obj1);
  return 0;
}

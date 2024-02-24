#include <iostream>

class deep {
 private:
  int* data;

 public:
  deep(int d);
  ~deep();
  deep(const deep& other);

  const int* get_data_value() { return data; } // getter, return const pointer to data 
};

deep::deep(int d) {
  data = new int;
  *data = d;
}

deep::~deep() {
  delete data;
  std::cout << "deconstructor called" << std::endl;
}

// deep copy constructor
deep::deep(const deep& other) {
  data = new int;
  *data = *other.data;
};

void display_data(deep& obj) { std::cout << obj.get_data_value() << std::endl; }
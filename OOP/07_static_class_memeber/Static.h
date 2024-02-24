#include <iostream>

class Static {
 private:
  static int num_of_object;

 public:
  static int
  get_num_of_object();  // since static only hae access to static data member

  Static(int d);
  ~Static();
};
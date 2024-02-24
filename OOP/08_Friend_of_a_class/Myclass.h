class Myclass {
  friend void display_value(Myclass& m);
  int value;

 public:
  Myclass(int d);
};
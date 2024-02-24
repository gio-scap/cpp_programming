class Myclass {
 private:
  int value;

 public:
  int get_value() const { return value; }
  Myclass(int d) : value{d} {}
};
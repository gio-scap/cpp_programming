class Move {
 private:
  int* data;

 public:
  void set_value(int d);
  int get_value();

  // constructor
  Move(int d);
  Move(const Move& source);
  ~Move();

  // move constructor
  Move(Move&& source) noexcept;
};
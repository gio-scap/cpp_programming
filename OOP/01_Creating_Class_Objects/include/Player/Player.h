#include <iostream>

class Player {
 private:
  std::string _name;
  int _health;
  int _xp;

 public:
  // overloaded constructor
  void set_name(std::string name_) { _name = name_; }
  Player();
  Player(std::string name_);
  Player(std::string name_, int health_, int xp_);

  // Deconstructor
  ~Player();
};

#include "Player/Player.h"

#include <iostream>

Player::Player() {
  std::cout << "No args constrctor called" << std::endl;
  _name = "";
  _xp = 1;
  _health = 100;
}

Player::Player(std::string name_) {
  std::cout << "string constructor called" << std::endl;
}

Player::Player(std::string name_, int health_, int xp_) {
  std::cout << "three args constructor called" << std::endl;
}
Player::~Player() {
  std::cout << "decostructor called for " << _name << std::endl;
}
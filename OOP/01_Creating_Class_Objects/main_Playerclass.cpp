#include "Player/Player.h"

int main() {
  {
    Player Mario;

    Mario.set_name("Mario");
    Player giosca("giosca");
  }
  Player Luigi("Luigi", 100, 10);

  Player* enemy = new Player;
  enemy->set_name("Enemy");

  delete enemy;
}
#include <iostream>
#include <vector>

#include "src/Copy.h"
#include "src/Move.h"

using namespace std;

int main() {
  vector<Copy> vec_Copy;

  {
    vec_Copy.push_back(Copy{10});
    vec_Copy.push_back(Copy{20});
    vec_Copy.push_back(Copy{30});
    vec_Copy.push_back(Copy{40});
  }
  cout << "----------\n";

  vector<Move> vec_move;
  vec_move.push_back(Move{10});
  vec_move.push_back(Move{20});
  vec_move.push_back(Move{30});
  vec_move.push_back(Move{40});

  cout << "----------\n";

  return 0;
}
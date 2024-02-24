#include <iostream>

using namespace std;

int main() {
  // example of l_reference and r- reference

  int x{100};
  int& l_ref = x;
  cout << "l_ref = " << l_ref << endl;

  l_ref = 200;
  cout << "l_ref = " << l_ref << " , x = " << x << endl;

  int&& r_ref = 10;
  cout << "r_ref = " << r_ref << endl;
  r_ref = 20;
  cout << "r_ref = " << r_ref << endl;

  return 0;
}

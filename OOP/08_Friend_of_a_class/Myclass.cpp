#include "Myclass.h"

#include <iostream>

void display_value(Myclass& M) { std::cout << M.value << "\n"; }

Myclass::Myclass(int d) : value{d} {}

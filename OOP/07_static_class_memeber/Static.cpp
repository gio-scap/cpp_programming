#include "Static.h"

// initialize the static attribute
int Static::num_of_object = 0;

int Static::get_num_of_object() { return num_of_object; }

Static::Static(int d) { ++num_of_object; }

Static::~Static() { --num_of_object; }

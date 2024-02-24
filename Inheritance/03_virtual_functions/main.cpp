#include "src/derived.cpp"

int main()
{

    Base *base;
    Derived derived;

    base = &derived;
    base->print("1");
    base->print_virtual("2");
}
#include "base.cpp"
#pragma once

class Derived : public Base
{
    void print_virtual(std::string text) override
    {
        std::cout << "[Derived class is prinitng] " << text << std::endl;
    }

    void print(std::string text)
    {
        std::cout << "[Derived class is prinitng] " << text << std::endl;
    }
};
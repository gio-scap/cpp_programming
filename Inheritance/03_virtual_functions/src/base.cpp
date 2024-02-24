#include <iostream>
#pragma once
class Base
{
public:
    virtual void print_virtual(std::string text)
    {
        std::cout << "[Base class is printing] " << text << std::endl;
    }

    void print(std::string text)
    {
        std::cout << "[Base class is printing] " << text << std::endl;
    }
};
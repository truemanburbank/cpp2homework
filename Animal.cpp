#include "Animal.h"
#include <iostream>

void Dog::MakeSound() 
{
    std::cout << "woof" << '\n';
}

void Cat::MakeSound() 
{
    std::cout << "meow" << '\n';
}

void Cow::MakeSound() 
{
    std::cout << "ummmm..." << '\n';
}

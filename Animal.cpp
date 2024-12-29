#include <iostream>
#include "Animal.h"

void Dog::MakeSound() const
{
    std::cout << "woof" << '\n';
}

void Cat::MakeSound() const
{
    std::cout << "mew" << '\n';
}

void Cow::MakeSound() const
{
    std::cout << "moo" << '\n';
}

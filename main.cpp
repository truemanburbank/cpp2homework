#include <iostream>
#include "Animal.h"
using namespace std;

int main()
{
    Animal* animal[3] = {new Dog(), new Cat(), new Cow()};
    
    for (int i = 0; i < 3; i++)
    {
        animal[i] -> MakeSound();
    }

    for (int i = 0; i < 3; i++)
    {
        delete animal[i];
    }

    return 0;
}
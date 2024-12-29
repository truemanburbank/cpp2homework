#include "Animal.h"
#include "Zoo.h"
#include <iostream>

int main()
{
    std::srand(static_cast<unsigned int>(time(nullptr)));
    
    Animal* animals[3] = {new Dog(), new Cat(), new Cow()};

    for (int i = 0; i < 3; i++)
    {
        animals[i]->MakeSound();
    }

    for (int i = 0; i < 3; i++)
    {
        delete animals[i];
    }

    Zoo zoo;
    for (int i = 0; i < 3; i++)
    {
        zoo.addAnimal(zoo.createRandomAnimal());
    }

    std::cout << "Zoo created" << '\n';
    zoo.performActions();

    return 0;
}
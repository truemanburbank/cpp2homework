#include "Zoo.h"
#include "Animal.h"
#include <cstdlib>
#include <iostream>

void Zoo::addAnimal(Animal* animal)
{
    if (index < 10)
    {
        animals[index++] = animal;
    }
    else
    {
        std::cout << "Zoo is Full" << '\n';
    }
}

void Zoo::performActions()
{
    for (int i = 0; i < index; i++)
    {
        animals[i]->MakeSound();
    }
}

Zoo::~Zoo()
{
    for (int i = 0; i < index; i++)
        delete animals[i];
};

Animal* Zoo::createRandomAnimal()
{
    Animal* animal = nullptr;
    
    int randomIndex = rand() % 3;
    
    switch (randomIndex)
    {
    case 0:
        animal = new Dog();
        break;
    case 1:
        animal = new Cat();
        break;
    case 2:
        animal = new Cow();
        break;
    default:
            animal = nullptr;
    }

    return animal;
}


#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    virtual ~Animal() = default;
    virtual void MakeSound() = 0;
};

class Dog : public Animal
{
public:
    void MakeSound();
};

class Cat : public Animal
{
public:
    void MakeSound();
};

class Cow : public Animal
{
public:
    void MakeSound();
};

#endif // ANIMAL_H
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    virtual void MakeSound() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    void MakeSound() const override;
};

class Cat : public Animal
{
public:
    void MakeSound() const override;
};

class Cow : public Animal
{
public:
    void MakeSound() const override;
};

#endif
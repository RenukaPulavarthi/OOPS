#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function for polymorphism
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

// Derived class: Cow
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main() {
    // Base class pointers
    Animal* animal;

    Dog dog;
    Cat cat;
    Cow cow;

    // Polymorphic behavior
    animal = &dog;
    animal->makeSound();

    animal = &cat;
    animal->makeSound();

    animal = &cow;
    animal->makeSound();

    return 0;
}

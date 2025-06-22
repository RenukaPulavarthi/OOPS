#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
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
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();  // Polymorphism
    }

    // Clean up
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    Person(string name) {
        this->name = name;
    }

    void talk() {
        cout << name << " is talking." << endl;
    }
};

// Derived class from Person
class Chef : public Person {
public:
    Chef(string name) : Person(name) {}

    void cook() {
        cout << name << " is cooking delicious food." << endl;
    }
};

// Derived class from Chef (Multi-level Inheritance)
class PastryChef : public Chef {
public:
    PastryChef(string name) : Chef(name) {}

    void bakeCake() {
        cout << name << " is baking a beautiful cake." << endl;
    }
};

// Main function
int main() {
    PastryChef renu("Renuka");

    renu.talk();       // From Person
    renu.cook();       // From Chef
    renu.bakeCake();   // From PastryChef

    return 0;
}

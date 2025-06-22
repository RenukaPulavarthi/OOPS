// Abstract base class
abstract class Animal {
    abstract void makeSound();  // Abstract method
}

// Derived class: Dog
class Dog extends Animal {
    void makeSound() {
        System.out.println("Dog says: Woof!");
    }
}

// Derived class: Cat
class Cat extends Animal {
    void makeSound() {
        System.out.println("Cat says: Meow!");
    }
}

// Derived class: Cow
class Cow extends Animal {
    void makeSound() {
        System.out.println("Cow says: Moo!");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        Animal[] animals = { new Dog(), new Cat(), new Cow() };

        for (Animal a : animals) {
            a.makeSound();  // Polymorphic call
        }
    }
}

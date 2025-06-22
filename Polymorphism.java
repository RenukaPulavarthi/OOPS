// Base class
class Animal {
    void makeSound() {
        System.out.println("Some generic animal sound");
    }
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

// Main class to test polymorphism
public class Main {
    public static void main(String[] args) {
        Animal a;

        a = new Dog();
        a.makeSound();  // Woof!

        a = new Cat();
        a.makeSound();  // Meow!

        a = new Cow();
        a.makeSound();  // Moo!
    }
}

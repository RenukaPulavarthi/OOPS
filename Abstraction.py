from abc import ABC, abstractmethod

# Abstract Base Class
class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass  # Abstract method, no body

# Derived class: Dog
class Dog(Animal):
    def make_sound(self):
        print("Dog says: Woof!")

# Derived class: Cat
class Cat(Animal):
    def make_sound(self):
        print("Cat says: Meow!")

# Derived class: Cow
class Cow(Animal):
    def make_sound(self):
        print("Cow says: Moo!")

# Main function
def main():
    animals = [Dog(), Cat(), Cow()]

    for animal in animals:
        animal.make_sound()  # Polymorphic call

if __name__ == "__main__":
    main()

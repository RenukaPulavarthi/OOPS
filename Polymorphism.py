# Base class
class Animal:
    def make_sound(self):
        print("Some generic animal sound")

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

# Polymorphism in action
def animal_sound(animal):
    animal.make_sound()  # One function, many behaviors

# Main
dog = Dog()
cat = Cat()
cow = Cow()

animal_sound(dog)
animal_sound(cat)
animal_sound(cow)

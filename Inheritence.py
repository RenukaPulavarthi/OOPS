# Base class
class Person:
    def __init__(self, name):
        self.name = name

    def talk(self):
        print(f"{self.name} is talking.")

# Derived class from Person
class Chef(Person):
    def cook(self):
        print(f"{self.name} is cooking delicious food.")

# Derived class from Chef (multi-level inheritance)
class PastryChef(Chef):
    def bake_cake(self):
        print(f"{self.name} is baking a beautiful cake.")

# Example usage
renu = PastryChef("Renuka")

renu.talk()         # Inherited from Person
renu.cook()         # Inherited from Chef
renu.bake_cake()    # Defined in PastryChef

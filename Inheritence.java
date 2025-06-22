class Person {
    String name;

    Person(String name) {
        this.name = name;
    }

    void talk() {
        System.out.println(name + " is talking.");
    }
}

// Derived class from Person
class Chef extends Person {
    Chef(String name) {
        super(name);
    }

    void cook() {
        System.out.println(name + " is cooking delicious food.");
    }
}

// Derived class from Chef (Multi-level Inheritance)
class PastryChef extends Chef {
    PastryChef(String name) {
        super(name);
    }

    void bakeCake() {
        System.out.println(name + " is baking a beautiful cake.");
    }
}

// Main class to run the code
public class Main {
    public static void main(String[] args) {
        PastryChef renu = new PastryChef("Renuka");

        renu.talk();       // From Person
        renu.cook();       // From Chef
        renu.bakeCake();   // From PastryChef
    }
}

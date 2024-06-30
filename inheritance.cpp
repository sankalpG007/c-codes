#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

// Multilevel Inheritance
class GermanShepherd : public Dog {
public:
    void specificBreed() {
        cout << "This is a German Shepherd." << endl;
    }
};

// Hierarchical Inheritance
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat is meowing." << endl;
    }
};

// Multiple Inheritance
class Pet {
public:
    void showAffection() {
        cout << "Pet is showing affection." << endl;
    }
};

class Bird : public Animal, public Pet {
public:
    void fly() {
        cout << "The bird is flying." << endl;
    }
};

int main() {
    // Single Inheritance
    Dog myDog;
    myDog.eat();   // Inherited from Animal class
    myDog.bark();  // Defined in Dog class

    cout << endl;

    // Multilevel Inheritance
    GermanShepherd myGSD;
    myGSD.eat();            // Inherited from Animal class
    myGSD.bark();           // Inherited from Dog class
    myGSD.specificBreed();  // Defined in GermanShepherd class

    cout << endl;

    // Hierarchical Inheritance
    Cat myCat;
    myCat.eat();   // Inherited from Animal class
    myCat.meow();  // Defined in Cat class

    cout << endl;

    // Multiple Inheritance
    Bird myBird;
    myBird.eat();           // Inherited from Animal class
    myBird.showAffection(); // Inherited from Pet class
    myBird.fly();           // Defined in Bird class

    return 0;
}

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Override the virtual function
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override { // Override the virtual function
        cout << "Cat meows." << endl;
    }
};

void animalSound(Animal &a) {
    a.makeSound();
}

int main() {
    Animal a;
    Dog d;
    Cat c;

    animalSound(a); // Output: Animal makes a sound.
    animalSound(d); // Output: Dog barks.
    animalSound(c); // Output: Cat meows.

    return 0;
}

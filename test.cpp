#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};


int main(){
    Animal a;
    Dog b;
    Dog s(string name);Animal(name){};
    b.sound(); // Outputs: Dog barks
    a.sound(); // Outputs: Dog barks (not Animal sound)
}
// Usage:


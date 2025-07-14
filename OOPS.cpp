#include<iostream>
using namespace std;

class Animal{
    /*encapsulation:
    the concept of bundling data and functions that operate on that data into a single unit (a class). 
    it also provides access controllers to restrict access to the code. public , private and protected. */
    private:
    string name;
    public:
    Animal(string n){
        name=n;
    }
    /*abstraction:
    hiding complex implememtation of code or program from the user.*/

    void eat(){
        
        cout << name<< " is eating" << endl;
    }
    void speak(){
        cout<< name<<"is speaking"<< endl;
    }
};

/*inheritance:
the child class can access the proprties (data members and methods) from the base class*/
class Dog:public Animal{
    public:
    Dog(string name) : Animal(name){}

    void bark(){
        cout<< "dog is barking";
    }
    void speak(){
        cout<< "Dog is speaking in dog class"<< endl;
    }
};
/*polymorhism
poly= many and morhism= forms one function acan act different in different context.*/
class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a,  double b){
        return a+b;
    }
};

int main(){
    Animal a("dog");
    a.eat();

    Dog d("Tommy");
    d.eat();
    d.speak();

    Calculator c;
    cout<< "int type"<< c.add(5, 19)<< endl;
    cout<< "double type "<< c.add(1.3,1.4)<< endl;


    return 0;
}

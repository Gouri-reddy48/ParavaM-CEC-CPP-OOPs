#include<iostream>
using namespace std;

class Base
{
    public:
        void showBase()
        {
            cout << "base member function has been called!" << endl;
        }

};

class Derived : public Base
{
    public:
        void showBase()
        {
            //function overriding
            cout << "derived member function has been called!" << endl;
            // syntax: base-class-name :: member-function
            Base::showBase(); //calling the member of base class using scope resolution operator
        }

};

//example 2:
class Animal
{
    public:
        void makeSound()
        {
            cout << "animal makes some sound!" << endl;
        }
};

class Dog : public Animal
{
    public:
        void makeSound()
        {
            //function overriding (same member function name)
            Animal :: makeSound(); //calling the animal class - member function
            cout << "dog barks!" << endl;
        }
};

class Cat : public Animal
{
    public:
        void makeSound()
        {
            //function overriding (same member function name)
            
            cout << "cat meows!" << endl;
        }
};

int main()
{
    // Base b1;
    // b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
    
}
#include<iostream>
using namespace std;

class Wish
{
    private:
        string name;
        int age;

    public:
        Wish()
        {
            //default constructor
            name = "unknown";
            age = 0; 
        }

        Wish(string n, int a); //parameterized constructor

        void birthdayWishes();
        
        
};


//defining the rules of parameterized constructor outside the class using scope resolution  operator

Wish :: Wish(string n, int a) //syntax: classname :: constructor(parameters) (no return type require)
{
   name = n;
   age = a;
}
//defining the member function out of the class using scope resolution operator
void Wish :: birthdayWishes() 
{
    //syntax: return_type classname :: member_function(parameters) (return type is must)
    cout << "happy birthday " << name << " ! now you're " << age << " years old." << endl;
}
       
int main()
{
    string personName;
    int personAge;

    Wish person1;  //object declared
    person1.birthdayWishes();

    cout << "enter your name:";
    cin >> personName;
    cout << "enter your age:";
    cin >> personAge;

    Wish person2(personName, personAge);
    person2.birthdayWishes();
}
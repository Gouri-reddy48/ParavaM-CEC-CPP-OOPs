#include<iostream>
using namespace std;

class Customer
{
    public:
    string firstName, lastName;
    int age, rating;

    //initialized the constructor 
    Customer()
    {
        firstName = "John";
        lastName = "Doe";
        age = 10;
        rating = 5;
    }
    void showDetails()
    {
        cout << "Customer Name: " << firstName << " " << lastName << endl;
        cout << "Customer age: " << age << endl;

    }
    void giveRating(int rate);

    void showRating()
    {
        cout << "you've given" << rating << " star rating.thank you!" << endl;
    }
};
//scope resolution operator 

void Customer :: giveRating(int rate)
{
    rating = rate;
}

int main()
{
    Customer cust1;

    cust1.showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName = "gouri";
    cust2.lastName = "reddy";
    cust2.age = 18;

    int starRating;

    cout << "give your rating(0 to 5):";
    cin >> starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}
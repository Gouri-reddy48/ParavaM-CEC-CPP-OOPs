#include<iostream>
using namespace std;

class Area
{
    private:
        int length, breadth;

    public:
        int result;
        Area()
        {
            //default constructor (no parameters)
            length = 0;
            breadth = 0;
        }

        Area(int a, int b)
        {
            //parameterized constructor (eg. 2 parameters)
            length = a;
            breadth = b;
        }

        void calculateArea()
        {
            result = length * breadth;
            cout << "area of rectangle with length: " << length << " and breadth: " << breadth << " is equal to " << result << endl;
        }

};

int main()
{
    int len, wid;
    Area rect1; //object 1 created
    rect1.calculateArea();

    cout << "enter the length & breadth for finding the area of rectangle: ";
    cin >> len >> wid;

    Area  rect2(len, wid); //object 2 created
    rect2.calculateArea();
}
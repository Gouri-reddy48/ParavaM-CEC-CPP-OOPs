#include<iostream>
using namespace std;

class Increment
{
    private:
        int number, value, value1;

    public:
        void setNumber(int num)
        {
            number = num;
        }
        //syntax for operator overloading:
        //return_type operator symbol{parameter is optional}
        //unary operator overloading
        void operator ++()
        {
            value = number + 5;
        }

        void operator --()
        {
            value1 = number - 5;
        }

        void showValue()
        {
            cout << "before incrementing: " << number << endl;
            cout << "after incrementing: " << value << endl;
            cout << "before decrementing: " << number << endl;
            cout << "after decrementing: " << value1 << endl;
        }

};

int main()
{
    int n;

    cout << "enter any number for incrementing & decrementing its value by 1:";
    cin >> n;
    Increment num1;

    num1.setNumber(n);
    ++num1;
    --num1;
    num1.showValue();

    cout << "number after incrementing: " << ++n << endl;
    cout << "number after decrementing: " << --n << endl;


}
#include<iostream>
using namespace std;

int main()
{
    int a;
    // syntax for declaring the pointer:
    // datatype *pointer_name
    // datatype of pointer should be same as reference variable
    // assign the address to the pointer: &variable_name
    // * refers to the pointer variable
    // & refers to the address of the variable
    // ptr refers to the address of the pointer
    // *ptr refers to the value of the pointer
    int *ptr = &a;

    float decimal;
    float *f = &decimal;

    cout << "enter the value of a:";
    cin >> a;

    cout << "enter any decimal value :";
    cin >> decimal;

    cout << "value of a: " << a << endl;
    cout << "address of a: " << &a << endl;
    cout << "value of pointer(ptr): " << ptr << endl;
    cout << "address of ptr: " << &ptr << endl;
    cout << "value pointed by ptr: " << *ptr << endl;
   
    cout << "value of decimal: " << a << endl;
    cout << "address of decimal: " << &decimal << endl;
    cout << "value of pointer(ptr): " << f << endl;
    cout << "address of ptr: " << &f << endl;
    cout << "value pointed by ptr: " << *f << endl;
   


}
#include<iostream>
#include<fstream> // header file for handling the files (read/write)
using namespace std;

int main(){
    // writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "enter your name and age: ";
    cin >> name >> age;
    out << "Hello " << name << "!" << endl;
    out << "you're " << age << " years old." << endl;    
    out.close();

    ifstream read("abd.txt");
    string line;
    getline(read, line);
    cout << "file contains: " << line << endl;
    while(getline(read, line))
    {
        cout << line << endl;
    }
    read.close();
}


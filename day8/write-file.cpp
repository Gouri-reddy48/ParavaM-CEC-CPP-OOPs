#include<iostream>
#include<fstream>
using namespace std;

class Teacher
{
    private:
        string name, branch;
        int age, experience;

    public:
        void setInfo(string n, string b, int a, int e)
        {
            name = n;
            branch = b;
            age = a;
            experience = e;
        }

        void writeToFile()
        {
            ofstream write("write.txt");
            write << "teacher details are as follows: " << endl;
            write << "name : " << name << endl;
            write << "age : " << age << endl;
            write << "branch : " << branch << endl;
            write << "experience : " << experience << endl;
        }
};

int main()
{
    string teacher_name, teacher_branch;
    int teacher_age, teacher_experience;

    cout << "enter the name, age, branch & experience";
    cin >> teacher_name >> teacher_age >> teacher_branch >> teacher_experience;

    Teacher t1;
    t1.setInfo(teacher_name, teacher_branch, teacher_age, teacher_experience);
    t1.writeToFile();

}   
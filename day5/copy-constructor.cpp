#include<iostream>
using namespace std;


class Teacher
{
    private:
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher()
        {
            branch = "AIML";
            name = "John Doe";
            qualification = "M.tech";
            experience = 5;
            cout << "Welcome, John Doe!" << endl;
        }

        void setData(string Tname, string Tbranch, string Tqual, int exp){
            name = Tname;
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName, string TeacherBranch, string TeacherQual, int TeacherExp){
            setData(TeacherName, TeacherBranch, TeacherQual, TeacherExp);
            cout << "Welcome, " << name << " to " << branch << "." << endl;
            cout << "You've graduated with, " << qualification << " degree.And you've " << experience << "years of experience " << endl;
        }

        Teacher(Teacher &t){
            name = t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;
        }

        void getData(){
            cout << "Welcome, " << name << " to " << branch << "." << endl;
            cout << "You've graduated with, " << qualification << " degree.And you've " << experience << "years of experience " << endl;
        }

        ~Teacher(){
            cout << "Objects work is done, clearing the memory!"<< endl;
        }
};

int main(){
    string n, q, b;

    int e;

    Teacher teacher1;

    cout << "Enter your name, qualification, branch and experience";
    cin >> n >> q >> b >> e;

    Teacher teacher2(n, q, b, e);

    Teacher Teacher3 = teacher2;
    Teacher3.getData();
}
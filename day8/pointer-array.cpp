#include<iostream>
using namespace std;

class Employee
{
    //base class
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary)
        {
            employeeID = id;
            employeeName = name;
            experience = exp;
            this->salary = salary;
        }

        void showDetails()
        {
            cout << "the employee with name " << employeeName << " bearing " << employeeID << " having "
            << experience << " years of experience and receives a salary of rs." << salary << "/-" << endl;
        }
};
class Skill : public Employee
{
    //derived class(single inheritance)

    private:
        int skillCount;
        string *skills; //pointer array

    public:
        Skill() //default constructor without initializing any values
        {
            cout << "no data found";
        }
        Skill(int count)
        {
            // parameterized constructor
            skillCount = count;
            skills = new string[skillCount];
            cout << "dynamically created the pointer array - skills" << endl;
            cout << "enter the " << count << "technologies you're familiar with: " << endl;
            for(int i = 0; i < count; i++)
            {
                // array initialization
                cout << "skill " << i + 1 << ": ";
                cin >> skills[i];
            }
        }

        void showSkills()
        {
            cout << "skills known: " << endl;
            for(int i = 0; i < skillCount; i++)
            {
                cout << "- " << skills[i] << endl;
            }
        }

        ~Skill()
        {
            delete[] skills;
            cout << "memory has been cleared by the destructor!" << endl;
        }

};

int main()
{
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "enter the following details of the employee: " << endl;
    cout << "employee id,name,years of experience,salary: " << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;

    cout << "enter the number of technologies you know: " << endl;
    cin  >> skill_count;

    //pointer referring to the object s1 of skill class which can also inherit the properties of employee class
    Skill s1(skill_count);
    Skill *emp1 = &s1; //pointer object - *emp1

    s1.addDetails(emp_id,emp_name,emp_exp,emp_salary);
   
    emp1->showDetails();

    emp1->showSkills();

    Skill s2;


}
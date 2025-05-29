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

    private:
        int skillCount;
        string skills[10];

    public:
        void setSkills(int count)
        {
            skillCount = count;
            cout << "enter the " << count << "technologies you're familiar with: " << endl;
            for(int i = 0; i < count; i++)
            {
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

};

int main()
{
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "enter the following details of the employee: " << endl;
    cout << "employee id,name,years of experience,salary: " << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;

    //pointer referring to the object s1 of skill class which can also inherit the properties of employee class
    Skill s1;
    Skill *emp1 = &s1; //pointer object - *emp1

    emp1->addDetails(emp_id,emp_name,emp_exp,emp_salary);
    
    cout << "enter the number of technologies you know: " << endl;
    cin  >> skill_count;

    emp1->setSkills(skill_count);
    emp1->showDetails();

    emp1->showSkills();


}
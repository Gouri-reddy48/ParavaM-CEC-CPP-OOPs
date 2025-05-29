#include<iostream>
using namespace std;

class Employee
{
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

int main()
{
    string empName, empID;
    int empExp;
    float empsalary;

    cout << "enter your name, employee-ID, years of experience & salary:";
    cin >> empName >> empID >> empExp >> empsalary;

    Employee emp1; //object created
    Employee *empPtr = &emp1; //pointer is pointing/referring to the object emp1


    //using the pointer we are assigning the value to the object using pointer deferencing & dot operator
    (*empPtr).addDetails(empID, empName, empExp, empsalary); 
    (*empPtr).showDetails();
     //using the pointer we are assigning the value to the object using pointer deferencing & arrow operator
    empPtr->addDetails(empID, empName, empExp, empsalary); 
    empPtr->showDetails();

    // dyanamically allocating memory for the pointer object
    //syntax: className *pointer_name = new className
    Employee *ptrEmp = new Employee;
    ptrEmp->addDetails("PM123","Ajay",3,50000.00);
    ptrEmp->showDetails();
    // emp1.addDetails <==> (*empPtr). addDetails <==> empPtr->addDetails

}
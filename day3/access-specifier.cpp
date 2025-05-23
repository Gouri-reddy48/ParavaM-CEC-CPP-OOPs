#include<iostream>
using namespace std;
class Bank
{
    private:
        int balance=0;
    public:
        //member data of the class
        string custName, custEmail;
        int acNumber;

        void createAccount(string cName, string cEmail)
        {
            custName=cName;
            custEmail=cEmail;
        }

        void displayInfo()
        {
            cout << "Customer Name: " << custName << endl;
            cout << "Customer Email: " << custEmail << endl; 
        }

        void addBalance(int account, int amount)
        {
            balance += amount;
            cout << "the amount has been deposited successfully!" << endl;
        }
        void withdrawAmount(int account, int amount)
        {
            balance -= amount;
            cout << "the amount has been withdrwan successfully!" << endl;
        }

        void checkBalance()
        {
            cout << "Bank Balance: " << balance << endl;
        }
};
int main()
{
    Bank cust1; //object declared
    string name, email;
    int acNum, amount;
    
    cout << "enter your name: ";
    cin >> name;
    cout << "enter your email id: ";
    cin >> email;
    cout << "enter your account number: ";
    cin >> acNum;
    cout << "enter the amount to be deposited: ";
    cin >> amount;

    cust1.createAccount(name, email);
    cust1.displayInfo();
    cust1.addBalance(acNum, amount);
    cust1.checkBalance();
    cout << "enter the amount to be withdrawn: ";
    cin >> amount;
    cust1.withdrawAmount(acNum, amount);
    cust1.checkBalance();

    

}
        

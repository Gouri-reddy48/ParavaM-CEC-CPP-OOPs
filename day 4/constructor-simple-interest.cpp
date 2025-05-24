#include<iostream>
using namespace std;

class Interest
{
    private:
        int principal, term, rate, totalInterest;
        float rateInPercent;

    public:
        int simpleInterest=0;
        Interest()
        {
            //default constructor
            principal = 0;
            term = 0;
            rate = 0;
            totalInterest = 0;
            rateInPercent=0;
            cout << "total interest earned: " << totalInterest << endl;
        }

        void setValues(int a, int y)
        {
            principal = a;
            term = y;
        }

        void setRateValueInteger(int rateInInteger)
        {
            rate = rateInInteger;
        }

        void setRateValuefloat(float rateInFloat)
        {
            rateInPercent = rateInFloat;
        }

        

        


        Interest(int p, int t, int r)
        {
            setValues(p, t);
            setRateValueInteger(r);
            simpleInterest = (principal * term * rate)/100;
            cout << "simple interest for the following details: " << endl;
            cout << "principal amount: " << principal << endl;
            cout << "no.of years(term): " << term << endl;
            cout << "rate of interest(in interger): " << rate << endl;
            totalInterest = principal + simpleInterest; 
            cout << "total interest earned: " << totalInterest << endl;
        }
        Interest(int p, int t, float rateInDecimal)
        {
            setValues(p, t);
            setRateValuefloat(rateInDecimal);
            simpleInterest = (principal * term * rateInPercent);
            cout << "simple interest for the following details: " << endl;
            cout << "principal amount: " << principal << endl;
            cout << "no.of years(term): " << term << endl;
            cout << "rate of interest(in float): " << rateInPercent << endl;
            totalInterest = principal + simpleInterest; 
            cout << "total interest earned: " << totalInterest << endl;
        }
        ~Interest()
        {
            cout << "destructor has been called to destroy or free up the memory used by constructor";
        };

       
};

int main()
{
    int amount, year, rateOfInterest;
    float interestRate;

    Interest int1;

    Interest int4;

    cout << "enter the principal amount,no. of years & rate of interest(eg. 5):";
    cin >> amount >> year >> rateOfInterest;

    Interest int2(amount, year, rateOfInterest);

    cout << "enter the principal amount,no. of years & rate of interest(eg. 0.05):";
    cin >> amount >> year >> interestRate;

    Interest int3(amount, year, interestRate);


}

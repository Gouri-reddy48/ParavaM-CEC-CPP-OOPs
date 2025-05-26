#include<iostream>
using namespace std;

class Pizza
{
    private:
        string secretIngredient;

    public:
        string pizzaType, size;
        int price;
        bool isPaymentDone;

        void orderPizza()
        {
            cout << "order the pizza by selcting your favorite pizza:" << endl;
        }

        void bookPizza()
        {
            cout << "booking pizza!" << endl;
        }
 
        void bakePizza(string type, string pizzaSize)
        {
            pizzaType = type;
            size = pizzaSize;
            cout << "pizza type: " << pizzaType << ", size " << size << endl;
        }

        void addIngredient(string secret)
        {
            secretIngredient = secret;
        }

        void confirmOrder()
        {
            cout << "order confirmed!" << endl;
        }

        bool checkPayment(int money, bool payment)
        {
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone == true)
            {
                cout << "amount paid: Rs." << price << ", payment successfull!" << endl;
                confirmOrder();
                bookPizza();
                return true;
            }
            else{
                cout << "amount paid: Rs." << price << ", payment pending!" << endl;
                return false;
            }
            
        }

        void servePizza(int amount, bool paid, string typeofPizza, string sizeofPizza, string secretItem)
        {
            if(!checkPayment(amount, paid))
            {
                cout << "order cancelled due to the pending payment!" << endl;
                return;
            }
            
           
            bakePizza(typeofPizza, sizeofPizza);
            addIngredient(secretItem);
            cout << "pizza served! enjoy your pizza";
        }
};

int main()
{
    string pizType, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout << "enter the pizza type (veg/non-veg), size (regular/medium/large):";
    cin >> pizType >> size;

    pizzaAmount = 399;
    cout << "did the pay the amount(type 'true' if paid/type 'false' if not paid):";
    cin >> amountPaid;

    customer1.servePizza(pizzaAmount, amountPaid, pizType, size, secretIng);
}
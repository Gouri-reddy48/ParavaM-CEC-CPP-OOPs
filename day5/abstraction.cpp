#include<iostream>
using namespace std;

class Bike
{
    public:
        string brand, model, engine_type;
        int year, price;

    void injectFuel() 
    {
        // internal data - hidden
        cout << "Injected the fuel - pertol!";

    }

    void igniteFuel()
    {
         // internal data - hidden
        cout << "ignite the fuel!" << endl; 
    }

    void start(string bikeMode)
    {
        injectFuel(); //abstraction
        igniteFuel(); //abstraction
        cout << model << " Started, Happy Journey!";
    }

    void stopAcceleration()
    {
         // internal data - hidden
        cout << "acceleration stopped!" << endl;

    }

    void stopFuelFlow()
    {  
        // internal data - hidden
        cout << "stopping the fuel" << endl;
    }

    void stop()
    {
        stopAcceleration(); //abstraction
        stopFuelFlow(); //abstraction
        cout << model << "stopped, lock the vehicle!";
    }
};

int main()
{
    Bike bike1;
    bike1.brand = "bajarj";
    bike1.model = "pulsar NS125";
    bike1.engine_type = "BS6";
    bike1.year = 2022;
    bike1.price = 150000;
    bike1.start(bike1.model);
    bike1.stop();
}
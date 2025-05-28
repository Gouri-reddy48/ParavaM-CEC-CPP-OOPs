#include<iostream>
using namespace std;

class Animal
{
    string name;
    public:
        void setName(string animalName)
        {
            name = animalName;
        }
        int showAnimal()
        {
            cout << "name of the animal: " << name << endl;
        }
};

//animal  -> carnivore (symbolic representation)
class Carnivore : public Animal
{
    string vegetation;
    public:
        void setFood(string food)
        {
            vegetation = food;
        }

        void showFood()
        {
            cout << "type of animal: " << vegetation << endl;
        }
};

//mamal -> carnivore (symbolic representation)
class Mammal : public Carnivore
{
    // derived class -level2
    string habitat;
    public:
        void setHabitat(string place)
        {
            habitat = place;
        }
        void showHabitat()
        {
            cout << "living palce: " << habitat << endl;
        }
      
};

int main()
{
    string animal_name, food_type, place_of_living;

    cout << "enter the name of the animal & its food type: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);

    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);

    
}
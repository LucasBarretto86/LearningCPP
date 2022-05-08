#include <iostream>

using namespace std;

// Adding functions inside a struct and it's usage 

struct Car
{
    string name;
    string color;
    int hp;
    int topSpeed;

    void init(string initName, string initColor, int initHp, int initTopSpeed)
    {
        name = initName;
        color = initColor;
        hp = initHp;
        topSpeed = initTopSpeed;
    }

    void toString()
    {
        cout << "Name..........: " << name << "\n";
        cout << "Color.........: " << color << "\n";
        cout << "Horsepower....: " << hp << "\n";
        cout << "TopSpeed......: " << topSpeed << "\n\n";
    }
};

int main()
{
    Car car;
    car.name = "Ford Mustang";
    car.color = "Red";
    car.hp = 450;
    car.topSpeed = 321;

    Car car2;
    car2.init("Opala", "Black", 180, 160);

    car.toString();
    car2.toString();

    car2.topSpeed = 180;
    car2.toString();

    return 0;
}
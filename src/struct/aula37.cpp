#include <iostream>

using namespace std;

// Creating simple struct

struct Car
{
    string name;
    string color;
    int hp;
    int topSpeed;
};

int main()
{
    Car car;
    car.name = "Ford Mustang";
    car.color = "Red";
    car.hp = 450;
    car.topSpeed = 321;

    cout << "Name..........: " << car.name << "\n";
    cout << "Color.........: " << car.color << "\n";
    cout << "Horsepower....: " << car.hp << "\n";
    cout << "TopSpeed......: " << car.topSpeed << "\n";
    return 0;
}
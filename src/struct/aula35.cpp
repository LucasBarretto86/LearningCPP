#include <iostream>

using namespace std;

// Vectors using structs

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
    Car a, b, c;
    a.init("Opala", "Black", 180, 160);
    b.init("Fusca", "Silver", 130, 80);
    c.init("Vemaguetti", "Pink", 90, 80);

    Car *cars = new Car[3]{a, b, c};

    for (int i = 0; i < 3; i++)
    {
        cars[i].toString();
    }

    return 0;
}
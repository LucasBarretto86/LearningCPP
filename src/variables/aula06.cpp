#include <iostream>

// Variable scopes and math operator;

using namespace std;

string name = "Lucas"; // Global scope

int main()
{
    string anotherName = "Jorge"; // Local scope

    cout << "Sum: " << (10 + 5) << "\n\n";
    cout << "Subtract: " << (10 - 5) << "\n\n";
    cout << "Division: " << (10 / 5) << "\n\n";
    cout << "Multiply: " << (10 * 5) << "\n\n";
    cout << "Mode: " << (10 % 3) << "\n\n";

    return 0;
}
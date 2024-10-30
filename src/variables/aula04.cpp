#include <iostream>

// Simple primitive variables / cout and cin

using namespace std;

int main()
{
    int lives = 0;              // integer numbers: 10,25, 34
    char letter = 'A';          // sigle character 'A'
    double price = 2.45;        // 2.49999, 3.13333
    float weight = 61.5F;       // 2.5, 3.1
    bool isOverlapping = false; // true / false
    string name = "Lucas";      // um limited text

    cout << lives << "\n";
    cout << letter << "\n";
    cout << price << "\n";
    cout << weight << "\n";
    cout << isOverlapping << "\n";

    cout << "Digit your name:\n";
    cin >> name;
    cout << "Hello " << name << "!\n";
 
    return 0;
}
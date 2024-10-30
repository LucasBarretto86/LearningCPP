#include <iostream>

// Variables inline, const and define;

using namespace std;

#define pi 3.1415 // this is a constant definition, but it can't be in uppercase
#define text cout << "Any text\n"

int main()
{
    int lives, score, bullets; // mutiple variable definition
    const double PI = 3.1415;  // const definition

    cout << pi << "\n\n";
    cout << PI << "\n\n";
    cout << (pi == PI) << "\n\n";

    text;

    return 0;
}
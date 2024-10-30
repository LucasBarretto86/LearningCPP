#include <iostream>

// increment decrement

using namespace std;

int main()
{
    int inc = 0, dec = 10;
    cout << inc << " | " << inc++ << "\n\n";
    cout << inc << " | " << ++inc << "\n\n";
    cout << dec << " | " << dec-- << "\n\n";
    cout << dec << " | " << --dec << "\n\n";
    return 0;
}
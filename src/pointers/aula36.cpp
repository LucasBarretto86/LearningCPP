#include <iostream>

using namespace std;

// Memory address pointers (*, &)
// pointer operator = *
// address operator = &

int main()
{
    string name = "Lucas";

    string *nameAddr = &name;

    cout << nameAddr << " | " << &nameAddr << "\n\n";
    cout << nameAddr << " | " << *nameAddr << "\n\n";
    cout << name << " | " << *nameAddr << "\n\n";

    return 0;
}
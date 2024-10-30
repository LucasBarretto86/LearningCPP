#include <iostream>

using namespace std;

// Handling pointers inside functions

// Prototyping functions to allow main to see it
void subtract(float num, float value);
void add(float *num, float value);

int main()
{
    float num = 10;
    cout << num << "\n";

    subtract(num, 15); // notice that in this case we are sending the value from the variable num, not the variable itself, nor it's memory address
    cout << num << "\n";

    add(&num, 15); // In this case we are sending the memory where the value it's stored there fore our method handle the value stored itself change the value in global scope
    cout << num << "\n";

    return 0;
}

void subtract(float num, float value)
{
    num += value;
}

void add(float *num, float value)
{
    *num += value;
}   
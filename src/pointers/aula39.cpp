#include <iostream>

using namespace std;

// Pointers and Arrays

int main()
{
    int *nums;                   // createa a memory pointer
    int evenNums[3] = {1, 3, 5}; // normal array

    nums = evenNums; // stores the array first index memory address to the pointer
    cout << nums << " | " << evenNums << "\n\n";

    nums = &evenNums[1]; // stores the array second index memory address to the pointer
    cout << *nums << " | " << evenNums[1] << "\n\n";

    //Notice that each index from a array has s subsequencial address, considering it's type size, for instance an int has 4 bytes so each index will incremented by 4 bytes.
    cout << &evenNums[0] << " | " << &evenNums[1] << " | " << &evenNums[2] << "\n\n";

    //Shifting pointer address
    cout << nums << " | " << nums++ << " | " << nums++ << "\n\n";


    //Using pointer itself to store data inside an array
    nums = &evenNums[0];
    *nums = 10;
    cout << evenNums[0] << "\n\n";


    nums = &evenNums[0];
    *(nums+=1) = 20;
    cout << evenNums[1] << "\n\n";

    return 0;
}
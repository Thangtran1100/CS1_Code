#include<iostream>

using namespace std;

int main()
{
    // Declare pointers

    int* ptr2; // pointers to int

    // Initialize pointers

    int number = 5;

    int* ptr1 = &number; // get the address of number then assign to ptr1

    cout << ptr1 << endl; // output the address

    cout << *ptr1 << endl; // output the value of the address

    int number2 = *ptr1; // number2 = number

    ptr1 = ptr1 + 1;

    *ptr1 = *ptr1 + 1;

    cout << ptr1 << endl;

    cout << *ptr1 << endl;

    return 0;
}
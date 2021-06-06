#include<iostream>

using namespace std;

int* createArray();

int main()
{
    // statically allocated memory

    int numbers = 5;

    // dynamically allocated memory (manually managed)

    int* ptr = new int;

    *ptr = 5;

    delete ptr;

    // create & output array

    int* number = createArray();

    cout << "[";

    for(int i =0; i < 3; i++)
    {
        if(i > 0)
        {
            cout << ", ";
        }

        cout << number[i];
    }

    cout << "]";

    delete[] number;

    return 0;
}

int* createArray()
{
    int* array = new int[3];

    array[0] = 4;

    array[1] = 3;

    array[2] = 8;

    return array;
}
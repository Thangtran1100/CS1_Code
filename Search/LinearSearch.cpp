#include <iostream>

using namespace std;

int linearSearch(int array[], const int SIZE, int target);

int main()
{
    const int SIZE = 10;

    int array[SIZE] = {7, 8, 2, 5, 10, 33, 24, 56, 5, 1};

    int target;

    cout << "Enter the target: ";

    cin >> target;

    int index = linearSearch(array, SIZE, target);

    if(index != -1)
    {
        cout << "Target found at index: " << index << endl;
    }
    else
    {
        cout << "Target not found\n";
    }

    return 0;
}

int linearSearch(int array[], const int SIZE, int target)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(array[i] == target)
        {
            return i;
        }
    }

    return -1;
}
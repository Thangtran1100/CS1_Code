#include <iostream>

using namespace std;

void print(int array[], const int SIZE);

void selectionSort(int array[], const int SIZE);

int main()
{
    const int SIZE = 10;

    int array[SIZE] = {2, 3, 1, 9, 5, 10, 20, 12, 14, 0};

    print(array, SIZE);

    selectionSort(array, SIZE);

    print(array, SIZE);

    return 0;
}

void selectionSort(int array[], const int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int k = i + 1; k < SIZE; k++)
        {
            if(array[k] < array[i])
            {
                int tmp = array[k];

                array[k] = array[i];
                
                array[i] = tmp;
            }
        }
    }
}

void print(int array[], const int SIZE)
{
    cout << '[' << array[0];

    for(int i = 1; i < SIZE; i++)
    {
        cout << ", " << array[i];
    }

    cout << "]\n";
}
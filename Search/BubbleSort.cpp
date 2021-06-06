#include <iostream>

using namespace std;

void bubbleSort(int array[], const int SIZE);

void print(int array[], const int SIZE);

int main()
{
    const int SIZE = 10;

    int array[SIZE] = {2, 3, 1, 9, 5, 10, 20, 12, 14, 0};

    print(array, SIZE);

    bubbleSort(array, SIZE);

    print(array, SIZE);

    return 0;
}

void bubbleSort(int array[], const int SIZE)
{
    bool swapped;

    do
    {
        swapped = false;

        for(int i = 1; i < SIZE; i++)
        {
            if(array[i - 1] > array[i])
            {
                if(array[i - 1] > array[i])
                {
                    int tmp = array[i - 1];

                    array[i - 1] = array[i];

                    array[i] = tmp;

                    swapped = true;
                }
            }
        }
    } while (swapped);
    
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
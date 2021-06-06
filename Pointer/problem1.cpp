//Name: Dai Tran
//CSCI-0106
//Assignment #1: Dynamically Allocated Array

#include <iostream>

using namespace std;

float* createArray(int size);

float avgScore(float* number, int size);

int main()
{
    int size;

    do
    {
        cout << "Enter size of array: ";

        cin >> size;

    }while(size <= 0);
    
    float* numbers = createArray(size);

    cout << "Your array: [";

    for(int i = 0; i < size; i++)
    {
        if(i > 0)
        {
            cout << ", ";
        }

        cout << numbers[i];
    }

    cout << "]";

    cout << "\nThe average score: " << avgScore(numbers, size);

    delete[] numbers;

    return 0; 
}

float* createArray(int size)
{
    float* array = new float[size];

    for(int i = 0; i < size; i++)
    {   
        cout << "Enter value " << i + 1 << ": ";

        cin >> *(array + i);
    }

    return array;
}

float avgScore(float* number, int size)
{
    float sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += number[i];
    }

    return sum / size;
}
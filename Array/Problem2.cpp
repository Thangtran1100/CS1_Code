//Name: Dai Tran
//CSCI-0106
//Assignment #1: Array Basics
//For the function to find average value, I use help from https://www.geeksforgeeks.org/program-average-array-iterative-recursive/

#include <iostream>
#include <iomanip>

using namespace std;

void matrixArrayInput(int matrix[][3], const int SIZE);

void matrixArrayDisplay(int matrix[][3], const int SIZE);

int minArray(int matrix[][3], const int SIZE);

int maxArray(int matrix[][3], const int SIZE);

int avgArray(int matrix[][3], const int SIZE);

int main()
{
    const int SIZE = 3;

    int matrix[SIZE][3];

    matrixArrayInput(matrix, SIZE);

    matrixArrayDisplay(matrix, SIZE);

    cout << minArray(matrix, SIZE) << endl;

    cout << maxArray(matrix, SIZE) << endl;

    cout << avgArray(matrix, SIZE) << endl;

    return 0;
}

void matrixArrayInput(int matrix[][3], const int SIZE)
{
    cout << "Input\n";

    for(int r =0; r < SIZE; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << "Value at " << r << ", " << c << ": ";

            cin >> matrix[r][c];
        }
    }
}

void matrixArrayDisplay(int matrix[][3], const int SIZE)
{
    cout << "\nMatrix:\n";

    for(int r =0; r < SIZE; r++)
    {
        cout << '[';

        for(int c = 0; c < 3; c++)
        {
            if(c > 0)
            {
                cout << ", ";
            
            }

            cout << setw(4) << matrix[r][c];
        
            if(r == c && c == 2)
            {
                cout << "];";
            }
            else if(c == 2)
            {
                cout << "],";
            }
        }

        cout << endl;
    }
}

int minArray(int matrix[][3], const int SIZE)
{
    int min = matrix[0][0];

    for(int r = 0; r < SIZE; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(matrix[r][c] < min)
            {
                min = matrix[r][c];
            }
        }
    }

    cout << "\nMin: ";

    return min;
}

int maxArray(int matrix[][3], const int SIZE)
{
    int max = matrix[0][0];

    for(int r = 0; r < SIZE; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(matrix[r][c] > max)
            {
                max = matrix[r][c];
            }
        }
    }

    cout << "Max: ";

    return max;
}

int avgArray(int matrix[][3], const int SIZE)
{
    cout << "Avg: ";

    int sum = 0, count = 1;

    for(int r = 0; r < SIZE; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            sum += matrix[r][c];

            count++;
        }
    }

    return (float)sum / count;
}
#include <iostream>

using namespace std;

int linearSearch(int array[][3], const int SIZE, int target);

int main()
{
    const int SIZE = 3;

    int numbers[SIZE][3] = {
        {1, 3, 4},
        {5, 10, 20},
        {29, 36, 42}
    };

    int target;

    cout << "Enter the target: ";

    cin >> target;

    if (linearSearch(numbers, SIZE, target) == -1)
    {
        cout << "Target not found\n";
    }

    return 0;

}

int linearSearch(int array[][3], const int SIZE, int target)
{
    int i = SIZE - 1, j =0;

    while( i>= 0 && j < 3)
    {
        if( array[i][j] == target)
        {
            cout << "Target found at (" << i << ", " << j << ")\n";
            return i;
        }
        else if ( array[i][j] > target)
        {
            i--;
        }
        else 
        {
            j++;
        }
    }

    return -1;
    
}
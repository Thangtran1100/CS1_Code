#include <iostream>

using namespace std;

int binarySearch(int array[], const int SIZE, int target);

int main()
{   
    const int SIZE = 10;

    int array[SIZE] = {3, 6, 8, 19, 25, 36, 45, 55, 63, 78};

    int target;

    cout << "Enter target: ";

    cin >> target;

    int index = binarySearch(array, SIZE, target);

    if(index != -1)
    {
        cout << "Target found at index " << index << endl;
    }
    else
    {
        cout << "Target not found\n";
    }

    return 0;
}

int binarySearch(int array[], const int SIZE, int target)
{
    int left = 0;

    int right = SIZE;

    do
    {
        int mid = left + (right - left) / 2;

        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid;
        }
    } while (left < right);

    return -1;
    
}
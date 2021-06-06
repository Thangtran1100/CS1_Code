#include<iostream>

using namespace std;

int main()
{
    int array[5] = { 4, 10, 8, 5, 22};

    int* ptr = array; 

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl; //This is a new line of code
    }

    *(ptr + 1) = 9;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }

    
    return 0;
}
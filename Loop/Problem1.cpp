//Name: Dai Tran
//CSCI-0106
//Assignment #1: Compare two numbers

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to NASA super computer" << endl;

    cout << "Please enter two numbers between 100 and 100: ";

    int number1, number2;

    cin >> number1 >> number2;

    while (number1 < -100 || number1 > 100 || number2 < -100 || number2 > 100)
    {
        cout << "Invalid number!\nPlease enter two numbers between 100 and 100: ";

        cin >> number1 >> number2;
    }

    if (number1 < number2)
    {
        for(int i = number1; i <= number2; i++)
        {
            cout << i << ",";
        }

        cout << "\n";
    }
    else if (number1 > number2)
    {
        for (int i = number1; i >= number2; i--)
        {
            cout << i << ",";
        }

        cout << "\n";
    }
    else 
    {
        cout << number1 << endl;
    }

    return 0;

}
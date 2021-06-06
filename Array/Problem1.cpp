//Name: Dai Tran
//CSCI-0106
//Assignment #1: Array Basics

#include <iostream>

using namespace std;

void printArray (char letter[], const int SIZE, char choice);

void printResult (char letter[], const int SIZE);

int main()
{
    const int SIZE = 10;

    char letter[SIZE], choice;

    cout << "1. a-z\n2. A-Z\nChoose your array letters: ";

    cin >> choice;

    while (choice)
    {
        if(choice == '1' || choice == '2')
        {
            break;
        }

        cout << "1. a-z\n2. A-Z\nChoose your array letters: ";

        cin >> choice;
       
    }

    printArray(letter, SIZE, choice);

    return 0;
}

void printArray (char letter[], const int SIZE, char choice)
{
    char ch1 = 'a', ch2 = 'A', ch, letter1[10], letter2[10];

    int count = 1;

    for (int i = 0; i < 10; i++)
    {
        letter1[i] = ch1;

        letter2[i] = ch2;

        ch1++;

        ch2++;
    }

    for(int i = 0; i < SIZE; i++)
    {
        if(choice == '1')
        {
            cout << count << ". : ";

            cin >> letter[i];

            while (letter[i])
            {
                if(letter[i] == letter1[i])
                {
                    break;
                }
                else
                {
                    cout << count << ". : ";

                    cin >> letter[i];
                }
            }
        
            
            count++;
        }
        else if(choice == '2')
        {
            cout << count << ". : ";

            cin >> letter[i];

            while (letter[i])
            {
                if(letter[i] == letter2[i])
                {
                    break;
                }
                else
                {
                    cout << count << ". : ";

                    cin >> letter[i];
                }
            }
        
            
            count++;
        }
    }
    

    printResult(letter, SIZE);

}

void printResult (char letter[], const int SIZE)
{
    cout << "\nForward: ";

    for(int i = 0; i < SIZE; i++)
    {
        if(i > 0)
        {
            cout << ", ";
        }

        cout << letter[i];
    }

    cout << "\nBackward: ";

    for(int i = SIZE - 1; i >= 0; i--)
    {

        cout << letter[i];

        if(i > 0)
        {
            cout << ", ";
        }
    }

    cout << "\nPairs: ";

    for(int i = 0; i < SIZE / 2; i++)
    {
        if(i > 0)
        {
            cout << ", ";
        }
        
        if (SIZE - 1 == 9)
        {
            cout << letter[i] << ", " << letter[SIZE - i - 1];
        }
    }
}


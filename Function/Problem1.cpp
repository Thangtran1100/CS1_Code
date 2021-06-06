//Name: Dai Tran
//CSCI-0106
//Assignment #1: Arithmetic Functions

#include <iostream>
#include <iomanip>

using namespace std;

int add(int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

float divide(int a, int b);

int power(int value, int exp);

int main()
{
    cout << setprecision(2) << fixed << showpoint;

    int number1, number2;

    char ope;   //operator

    do
    {
        cout << "Welcome to the calculator!\n";

        cout << "Enter the first number: ";

        cin >> number1;

        cout << "Enter the second number: ";

        cin >> number2;

        cout << "Operators: + for addition, - for subtraction, * for multiplication, / for division, ^ for power\n";

        cout << "Type in an operator to start calculate: ";

        cin >> ope;

        while (ope != '+' && ope != '-' && ope != '*' && ope != '/' && ope != '^')
        {
            cout << "-------------------------------------------------------\n";

            cout << "You enter invalid operator!\n";

            cout << "Enter the first number: ";

            cin >> number1;

            cout << "Enter the second number: ";

            cin >> number2;

            cout << "Operators: + for addition, - for subtraction, * for multiplication, / for division, ^ for power\n";

            cout << "Type in an operator to start calculate: ";

            cin >> ope;
        }

        switch (ope)
        {
            case '+':

                cout << "Result of " << number1 << " + " << number2 << " = " << add(number1, number2) << endl;

                cout << "-------------------------------------------------------\n";

                break;
            
            case '-':
                cout << "Result of " << number1 << " - " << number2 << " = " << subtract(number1, number2) << endl;

                cout << "-------------------------------------------------------\n";

                break;

            case '*':
                cout << "Result of " << number1 << " * " << number2 << " = " << multiply(number1, number2) << endl;

                cout << "-------------------------------------------------------\n";

                break;

            case '/':
                if ( number2 == 0)
                {
                    cout << "Error!\n"; 

                    cout << "-------------------------------------------------------\n";
                }
                else
                {
                    cout << "Result of " << number1 << " / " << number2 << " = " << divide(number1, number2) << endl;

                    cout << "-------------------------------------------------------\n";
                }

                break;

            case '^':
                cout << "Result of " << number1 << " ^ " << number2 << " = " << power(number1, number2) << endl;

                cout << "-------------------------------------------------------\n";

                break;

        }
    } while (ope);
    
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
     return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / (float)b;
}

int power(int value, int exp)
{
    int result = 1;

    for (int i = 1; i <= exp; i++)
    {
        result *= value;
    }

    return result;
}
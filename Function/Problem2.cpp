//Name: Dai Tran
//CSCI-0106
//Assignment #2: Draw H Shape

#include <iostream>

using namespace std;

int input(int size);

void draw(int size);

int main()
{
    int size;

    input(size);

    return 0;
}

int input(int size)
{
    do
    {
        draw(size);

        cout << "Please give me the size: ";

        cin >> size;

        if (size < 0)
        {
            cout << "End program!" << endl;

            exit(0);
        }
        else if (size >= 0 && size < 3)
        {
            cout << "Please give me the size: ";

            cin >> size;
        }

    } while (size);

    return size;

}

void draw(int size)
{
    if (size >= 3 && size % 2 != 0)
    {
        for (int i = 1; i <= size; i++)
        {
        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || j == size)
            {
                cout << 'H';
            }
            else if (i == (size + 1) / 2)
            {
                cout << 'H';
            }
            else
            {
                cout << ' ';
            }
        }

        cout << endl;
        }
    }
}
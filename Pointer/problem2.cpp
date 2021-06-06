/*
	Name: Dai Tran
    CSCI-0106
    Assignment #2: Find first Non-Repeated Char 
	https://www.tutorialcup.com/interview/string/string-first-non-repeating-character.htm
	For using struct, I use from https://www.geeksforgeeks.org/structure-vs-class-in-cpp/
	and from https://cpp.daynhauhoc.com/9/1-structs/ which is in my native language, Vietnamese
	For c_str(), https://www.cplusplus.com/reference/string/string/c_str/
*/

#include <iostream>
#include <string>
#include <cstring>
#define ASCII_SIZE 256

using namespace std;

/*
    This is just like a character which include the count
    and position of the character in this structure.
*/

struct character
{
	int count;

	int position;
};

/*
    This is a function that convert the string we input into a pointer array
*/

char* createArray(string str, int size);

/*
    The function will return the first non-repeat character and the position of it
    in the string. If there are no non-repeat character in the string,
    then return -1
*/

void firstNonRepeatChar(char* array, int size);

int main()
{
	string str;

    do
    {
        cout << "Input a string: ";

        getline(cin, str);
        
		if(str == "quit")
        {
            break;
        }

        int size = str.length();

		char* array = createArray(str, size);

		firstNonRepeatChar(array, size);

		delete[] array;

    } while (str != "quit");

    return 0;
	
}

char* createArray(string str, int size)
{

	char* array = new char[size];

	strcpy(array, str.c_str());

	return array;
}

void firstNonRepeatChar(char* array, int size)
{
	int index = -1;

	character* characterFind = new character[ASCII_SIZE];

	for(int i = 0; i < size; i++)
	{
		(characterFind[array[i]].count)++;

		if(characterFind[array[i]].count == 1)
		{
			characterFind[array[i]].position = i;
		}
	}

	for(int i = 0; i < ASCII_SIZE; i++)
  	{
		if(characterFind[array[i]].count == 1) 
		{
			index = characterFind[array[i]].position;

			break;
		}
  	}

	if(index == -1)
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << array[index] << " is the first char that does not exist twice in the string at index " << index << endl;
	}
}
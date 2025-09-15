#include <iostream>
#include <fstream>
using namespace std;

string* reverseArray(string* array);
void displayArray(string* array);

int main()
{
    string* arr = new string[5];


}
string* reverseArray(string* array)
{
    for(int i = 0; i <5; i++)
    {
        cout << "Enter Name #" << i << ":";
        cin >> *(array + i);

    }

    for(int i = 0; i < 2; i++)
    {
        




    }
    return array;
}


#include <iostream>
#include <fstream>
using namespace std;

string* reverseArray(string* array);
void displayArray(string* array);

int main()
{
    string* arr = new string[5];
    reverseArray(arr);
    cout << "Reversed array: ";
    displayArray(arr);


    delete[] arr;

    return 0;


}
string* reverseArray(string* array)
{
    for(int i = 0; i <5; i++)
    {
        cout << "Enter Name #" << i << ":";
        cin >> *(array + i);

    }
    cout << "Original array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << *(array + i) << " ";
    }


    for(int i = 0; i < 2; i++)
    {
        string rep = *(array + i);
        *(array + i) = *(array + (4 - i));
        *(array + (4 - i)) = rep;

    }
    return array;
}

void displayArray(string* array)
{
    for(int i = 0; i < 5; i++)
    {
        cout << *(array + i) << " ";
    }

}


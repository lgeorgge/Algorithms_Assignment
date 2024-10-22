#include <iostream>
using namespace std;

template <class T>
void PrintArray(T arr[], int size, string comment = "")
{
    if (comment.length() > 0)
    {
        cout << comment << ": ";
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void found(int SearchResult, int searchTarget)
{
    if (SearchResult != -1)
    {
        cout << "Element " << searchTarget << " found at index: " << SearchResult << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }
}
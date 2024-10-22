// Algorithms assignment part B
// Authors : Mazen Ehab 20220467  / Bavly Soliman 20220080 / George Sherif 20220098

#include <iostream>
#include "FibonacciAlgorithms.cpp"
#include "MaxAndMinHeap.cpp"
#include "SearchingAlgorithms.cpp"
#include "HelpingMethods.cpp"

using namespace std;
int main()
{
    cout << "ALGORITHMS ASSIGNMENT #1 PART B " << endl;
    cout << "_____________________________________________________________________________________\n\n ";
    // Fibonacci Algorithms

    cout << "Tests For Fibonacci Algorithms :-" << endl;
    cout << "\nFibonacci Number at 10th term using recursion: " << fibonacci(10) << endl;
    cout << "\nFibonacci Number at 17th term using Matrix multiplication: " << Fibonacci_matrix(17) << endl;
    cout << "\nFibonacci Number at 25th term dynamic Programming: " << fibonacci_using_DB(25) << "\n"
         << endl;

    cout << "If you want to add numbers to try , enter 'y' , else press any key to go to search algorithm : ";
    char ch;
    cin >> ch;
    if (ch == 'y')
    {
        int num;
        cout << "Enter the number of term to get its value in Fibonacci series : ";
        cin >> num;
        cout << "Fibonacci Number at " << num << "th term using recursion: " << fibonacci(num) << endl;
        cout << "\nFibonacci Number at " << num << "th term using Matrix multiplication: " << Fibonacci_matrix(num) << endl;
        cout << "\nFibonacci Number at " << num << "th term dynamic Programming: " << fibonacci_using_DB(num) << "\n"
             << endl;
    }

    cout
        << "______________________________________________________________________________________\n\n";

    // Searching Algorithms

    cout << "Tests For Searching Algorithms :-" << endl;

    int target1 = 60, target2 = 14;

    int sortedArray[20] = {3, 7, 12, 18, 21, 25, 28, 31, 34, 39,
                           42, 47, 51, 56, 60, 65, 71, 78, 84, 90};
    int sizeOfSortedArray = sizeof(sortedArray) / sizeof(sortedArray[0]);

    PrintArray(sortedArray, sizeOfSortedArray, "these are the elements of sorted array of size 20");

    cout << "sequential Search  : (1) Iterative :-" << endl;
    found(Sequential_Search_Iterative(sortedArray, sizeOfSortedArray, target1), target1);

    cout << "Sequential Search  : (2) Recursive :-" << endl;

    // cout << "Enter the element to search: ";
    // int searchElement;
    // cin >> searchElement;
    // cout << "Element found at index: " << sequential_search(sortedArray, sizeOfSortedArray, searchElement) << endl;

    int unsortedArray[20] = {42, 7, 90, 18, 34, 25, 65, 12, 3, 28,
                             84, 39, 56, 47, 71, 21, 60, 31, 51, 78};
    int sizeOfUnsortedArray = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    int x = 5;
    // cout << "\nLinear Search: Element " << x << " found at index " << linear_search(arr, n, x) << endl;
    // cout << "\nBinary Search: Element " << x << " found at index " << binary_search(arr, n, x) << endl;
    cout << "______________________________________________________________________________________\n\n";
}

// Algorithms assignment part B
// Authors : Mazen Ehab 20220467  / Bavly Soliman 20220080 / George Sherif 20220098

#include <iostream>
#include "FibonacciAlgorithms.cpp"
#include "Max_MinHeapAndPriortyQueue.cpp"
#include "SearchingAlgorithms.cpp"

using namespace std;

void found(int SearchResult, int searchTarget);
void PrintArray(int arr[], int size, string comment = "");
void displayMenu();
bool isSorted(int arr[], int size);

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

    // // Searching Algorithms

    int choice;
    bool continueProgram = true;

    while (continueProgram)
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Sequential Search Iterative
            int n, target;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements of the array: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << "Array entered: ";
            PrintArray(arr, n);

            cout << "Enter target element to search: ";
            cin >> target;

            int result = Sequential_Search_Iterative(arr, n, target);
            if (result != -1)
            {
                cout << "Element found at index " << result << " using Sequential Search (Iterative)." << endl;
            }
            else
            {
                cout << "Element not found." << endl;
            }
            break;
        }
        case 2:
        {
            // Sequential Search Recursive
            int n, target;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements of the array: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << "Array entered: ";
            PrintArray(arr, n);

            cout << "Enter target element to search: ";
            cin >> target;

            int result = Sequential_Search_Recursive(arr, n, target);
            if (result != -1)
            {
                cout << "Element found at index " << result << " using Sequential Search (Recursive)." << endl;
            }
            else
            {
                cout << "Element not found." << endl;
            }
            break;
        }
        case 3:
        {
            // Binary Search Iterative
            int n, target;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter sorted elements of the array: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << "Array entered: ";
            PrintArray(arr, n);

            if (!isSorted(arr, n))
            {
                cout << "Error: The array is not sorted. Binary Search requires a sorted array." << endl;
                break;
            }

            cout << "Enter target element to search: ";
            cin >> target;

            int result = Binary_Search_Iterative(arr, n, target);
            if (result != -1)
            {
                cout << "Element found at index " << result << " using Binary Search (Iterative)." << endl;
            }
            else
            {
                cout << "Element not found." << endl;
            }
            break;
        }
        case 4:
        {
            // Binary Search Recursive
            int n, target;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter sorted elements of the array: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << "Array entered: ";
            PrintArray(arr, n);

            if (!isSorted(arr, n))
            {
                cout << "Error: The array is not sorted. Binary Search requires a sorted array." << endl;
                break;
            }

            cout << "Enter target element to search: ";
            cin >> target;

            int result = Recursive_Binary_Search(arr, 0, n - 1, target);
            if (result != -1)
            {
                cout << "Element found at index " << result << " using Binary Search (Recursive)." << endl;
            }
            else
            {
                cout << "Element not found." << endl;
            }
            break;
        }
        case 0:
            cout << "Exiting the program." << endl;
            continueProgram = false;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;
    }

    cout << "Next is implementation for Max heap,Min Heap and Priority Queue:-" << endl;

    // Part 1: Demonstrate Heap Operations (Using maxHeap and minHeap)
    cout << "=== Max Heap Demonstration ===" << endl;

    // Max Heap Demo
    maxHeap maxH;
    maxH.insertElement(15);
    maxH.insertElement(10);
    maxH.insertElement(25);
    maxH.insertElement(5);
    cout << "Max Heap Elements: ";
    maxH.display();

    cout << "Peek (Max): " << maxH.peek() << endl;
    cout << "Heap Length: " << maxH.length() << endl;
    cout << "Is Heap Empty? " << (maxH.isEmpty() ? "Yes" : "No") << endl;

    maxH.removeMax();
    cout << "After removing max element: ";
    maxH.display();

    cout << "Element at index 1: " << maxH.getValue(1) << endl;

    cout << "\n=== Min Heap Demonstration ===" << endl;

    // Min Heap Demo
    minHeap minH;
    minH.insertElement(15);
    minH.insertElement(10);
    minH.insertElement(25);
    minH.insertElement(5);
    cout << "Min Heap Elements: ";
    minH.display();

    cout << "Peek (Min): " << minH.peek() << endl;
    cout << "Heap Length: " << minH.length() << endl;
    cout << "Is Heap Empty? " << (minH.isEmpty() ? "Yes" : "No") << endl;

    minH.removeMin();
    cout << "After removing min element: ";
    minH.display();

    cout << "Element at index 1: " << minH.getValue(1) << endl;

    cout << "\n=== Priority Queue Demonstration ===" << endl;

    // Part 2: Demonstrate Priority Queue using Max Heap
    PriorityQueue pq;
    pq.insert(50);
    pq.insert(20);
    pq.insert(30);
    pq.insert(60);
    cout << "Priority Queue Elements: ";
    pq.display();

    cout << "Current Maximum: " << pq.maximum() << endl;
    cout << "Is Priority Queue Empty? " << (pq.isEmpty() ? "Yes" : "No") << endl;

    cout << "Extract Max (Highest Priority): " << pq.extractMax() << endl;
    cout << "After extracting max: ";
    pq.display();

    pq.removeMax();
    cout << "After removing another max element: ";
    pq.display();

    cout << "\n=== Heap Sort Demonstration ===" << endl;

    // Part 3: Demonstrate Heap Sort
    int arr[] = {15, 3, 17, 10, 84, 19, 6, 22, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    PrintArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted Array using Heap Sort: ";
    PrintArray(arr, n);
}

void PrintArray(int arr[], int size, string comment)
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

void displayMenu()
{
    cout << "------------------- SEARCH ALGORITHMS MENU -------------------" << endl;
    cout << "1] Sequential Search (Iterative)" << endl;
    cout << "2] Sequential Search (Recursive)" << endl;
    cout << "3] Binary Search (Iterative)" << endl;
    cout << "4] Binary Search (Recursive)" << endl;
    cout << "0] Exit" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Enter your choice: ";
}

// for binary search when a user enters an unsorted array
bool isSorted(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}
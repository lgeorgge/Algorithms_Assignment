// Algorithms assignment part B
// Authors : Mazen Ehab 2022  / Bavly Soliman 2022 / George Sherif 20220098

#include <iostream>
#include "FibonacciAlgorithms.cpp"
#include "MaxAndMinHeap.cpp"
#include "SearchingAlgorithms.cpp"
using namespace std;
int main()
{
    cout << "ALGORITHMS ASSIGNMENT #1 PART B " << endl;
    cout << "-----------------------------------------------------------\n\n ";
    // Fibonacci Algorithms

    cout << "\nFibonacci Number at 10th term using recursion: " << fibonacci(10) << endl;
    cout << "\nFibonacci Number at 17th term using Matrix multiplication: " << Fibonacci_matrix(17) << endl;
    cout << "\nFibonacci Number at 25th term dynamic Programming: " << fibonacci_using_DB(25) << endl;
}
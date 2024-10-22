#include <vector>
using namespace std;

// fibonacci by recursion
int fibonacci(int number)
{
    if (number <= 1)
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

// fibonacci by dynamic programming , using vector to store already calculated values

int fibonacciLogicUsingDB(int n, vector<int> &memo)
{
    // Base cases
    if (n <= 1)
        return n; // fib(0) = 0, fib(1) = 1

    // Check if the value is already computed
    if (memo[n] != -1)
    {
        return memo[n];
    }

    // Calculate and store in the memo vector
    memo[n] = fibonacciLogicUsingDB(n - 1, memo) + fibonacciLogicUsingDB(n - 2, memo);
    return memo[n];
}

int fibonacci_using_DB(int number)
{
    vector<int> memo(number + 1, -1);
    return fibonacciLogicUsingDB(number, memo);
}

// next lines are all related to fibonacci by matrix multiplication which is the last function

void Multiply_matrix(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void Power_matrix(int F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    int M[2][2] = {{1, 1}, {1, 0}};
    Power_matrix(F, n / 2);
    Multiply_matrix(F, F);

    if (n % 2 != 0)
        Multiply_matrix(F, M);
}

int Fibonacci_matrix(int n)
{
    if (n == 0)
        return 0;
    int F[2][2] = {{1, 1}, {1, 0}};
    Power_matrix(F, n - 1);
    return F[0][0];
}

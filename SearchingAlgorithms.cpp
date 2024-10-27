#include <iostream>

using namespace std;

int Sequential_Search_Iterative(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int Sequential_Search_Recursive(int arr[], int size, int target, int index = 0)
{
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    return Sequential_Search_Recursive(arr, size, target, index + 1);
}

int Binary_Search_Iterative(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target)
        {
            return middle;
        }
        if (arr[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1; // Element not found
}

int Recursive_Binary_Search(int arr[], int left, int right, int target)
{
    if (left == right)
    {
        if (arr[left] == target)
        {
            return left;
        }
        else
        {
            return -1;
        }
    }

    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] > target)
    {
        return Recursive_Binary_Search(arr, left, mid - 1, target);
    }
    return Recursive_Binary_Search(arr, mid + 1, right, target);
}
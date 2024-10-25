#include <iostream>
using namespace std;

class maxHeap
{
    int size = 0;
    int capacity = 10;
    int *array;

    int getParent(int i)
    {
        return (i - 1) / 2;
    }
    int getLeft(int i)
    {
        return 2 * i + 1;
    }
    int getRight(int i)
    {
        return 2 * i + 2;
    }

    int getParentValue(int i)
    {
        return array[getParent(i)];
    }
    int getLeftValue(int i)
    {
        return array[getLeft(i)];
    }
    int getRightValue(int i)
    {
        return array[getRight(i)];
    }
    void heapifyDown(int i)
    {
        int largest = i;
        int l = getLeft(i);
        int r = getRight(i);
        if (l < size && array[l] > array[largest])
        {
            largest = l;
        }
        if (r < size && array[r] > array[largest])
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(array[i], array[largest]);
            heapifyDown(largest);
        }
    }

    void heapifyUp(int i)
    {
        while (i > 0 && array[i] > array[getParent(i)])
        {
            swap(array[i], array[getParent(i)]);
            i = getParent(i);
        }
    }

    void ensureSize()
    {
        if (size == capacity)
        {
            capacity *= 1.5;
            int *newArray = new int[capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
        }
    }

public:
    maxHeap()
    {
        array = new int[capacity];
    }
    maxHeap(int initialCapacity)
    {
        array = new int[initialCapacity];
        capacity = initialCapacity;
    }

    int peek()
    {
        if (size == 0)
        {
            throw runtime_error("Heap is empty");
        }
        return array[0];
    }
    int getValue(int index)
    {
        if (index < 0 || index >= size)
        {
            throw runtime_error("Invalid index");
        }
        return array[index];
    }

    void insertElement(int element)
    {
        ensureSize();
        array[size++] = element;
        heapifyUp(size - 1);
    }

    void removeMax()
    {
        if (size == 0)
        {
            throw runtime_error("Heap is empty");
        }
        swap(array[0], array[--size]);
        heapifyDown(0);
    }

    int length()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    ~maxHeap()
    {
        delete[] array;
    }
};

class minHeap
{
    int size = 0;
    int capacity = 10;
    int *array;

    int getParent(int i)
    {
        return (i - 1) / 2;
    }
    int getLeft(int i)
    {
        return 2 * i + 1;
    }
    int getRight(int i)
    {
        return 2 * i + 2;
    }

    int getParentValue(int i)
    {
        return array[getParent(i)];
    }
    int getLeftValue(int i)
    {
        return array[getLeft(i)];
    }
    int getRightValue(int i)
    {
        return array[getRight(i)];
    }

    // Maintain min-heap property by pushing down the element at index i
    void heapifyDown(int i)
    {
        int smallest = i;
        int l = getLeft(i);
        int r = getRight(i);

        if (l < size && array[l] < array[smallest])
        {
            smallest = l;
        }
        if (r < size && array[r] < array[smallest])
        {
            smallest = r;
        }

        if (smallest != i)
        {
            swap(array[i], array[smallest]);
            heapifyDown(smallest);
        }
    }

    // Maintain min-heap property by pushing up the element at index i
    void heapifyUp(int i)
    {
        while (i > 0 && array[i] < array[getParent(i)])
        {
            swap(array[i], array[getParent(i)]);
            i = getParent(i);
        }
    }

    // Resize the heap array if it reaches capacity
    void ensureSize()
    {
        if (size == capacity)
        {
            capacity *= 1.5;
            int *newArray = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
        }
    }

public:
    minHeap()
    {
        array = new int[capacity];
    }
    minHeap(int initialCapacity)
    {
        array = new int[initialCapacity];
        capacity = initialCapacity;
    }

    int peek()
    {
        if (size == 0)
        {
            throw runtime_error("Heap is empty");
        }
        return array[0];
    }
    int getValue(int index)
    {
        if (index < 0 || index >= size)
        {
            throw runtime_error("Invalid index");
        }
        return array[index];
    }

    void insertElement(int element)
    {
        ensureSize();
        array[size++] = element;
        heapifyUp(size - 1);
    }

    void removeMin()
    {
        if (size == 0)
        {
            throw runtime_error("Heap is empty");
        }
        swap(array[0], array[--size]);
        heapifyDown(0);
    }

    int length()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    ~minHeap()
    {
        delete[] array;
    }
};

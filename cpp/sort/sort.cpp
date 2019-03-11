#include "sort.hpp"

// Auxiliary methods
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

// Selection sort
void selectionSort(int array[], int n)
{
    int minIndex{0};

    for(int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(int j = i+1; j < n; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        if(minIndex != i)
        {
            swap(&array[minIndex], &array[i]);
        }
    }
}
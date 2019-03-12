#include "sort.hpp"

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

// Bubble sort
void bubbleSort(int array[], int n)
{
    bool changed = false;

    for(int i = 0; i < n - 1; i++)
    {
        changed = false;
        for(int j = 0; j < n - i - 1; i++)
        {
            if(array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                changed = true;
            }
        }

        if(changed == false)
        {
            break;
        }
    }
}
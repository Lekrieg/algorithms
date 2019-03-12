#ifndef SORT_HPP
#define SORT_HPP

#include <iostream>

// Auxiliary methods
template<typename myType>
void swap(myType *xp, myType *yp)
{
    myType temp = *xp;
    *xp = *yp;
    *yp = temp;
}
template<typename myType>
void printArray(myType array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

// Selection sort
void selectionSort(int array[], int n);
template<typename myType>
void genericSelectionSort(myType array[], int n)
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
void bubbleSort(int array[], int n);

#endif // SORT_HPP
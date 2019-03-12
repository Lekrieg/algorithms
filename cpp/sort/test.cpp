#include "sort.hpp"

int main()
{
    // Selection sort
    int array[] = { 3, 2, 1, 55, 6, 99, 6, 0};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);
    printArray(array, size);

    // Generic Selection sort
    char genericArray[] = { 'a', 'n', 'b', 'q', 'z' };
    int genericArraySize = sizeof(genericArray) / sizeof(genericArray[0]);

    genericSelectionSort(genericArray, genericArraySize);
    printArray(genericArray, genericArraySize);

    // Bubble sort
    int array2[] = { 99, 1 ,8, 2, 33, 5, 44};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    bubbleSort(array2, size2);
    printArray(array2, size2);

    std::cin.get();
}
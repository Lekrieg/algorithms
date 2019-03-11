#include "sort.hpp"

int main()
{
    int array[] = { 3, 2, 1, 55, 6, 99, 6, 0};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);
    printArray(array, size);

    std::cin.get();
}
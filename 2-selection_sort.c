#include "sort.h"

/**
 * sortArray - sort an array using selection sort
 * @arr: array to sort
 * @idx: index
 * Return: void
*/

void sortArray(int arr[], int idx)
{
        int pivot = arr[idx];
        int iter = idx - 1;
        while (iter >= 0 && arr[iter] > pivot)
        {
                arr[iter + 1] = arr[iter];
                iter--;
        }
        arr[iter + 1] = pivot;
}

/**
 * selection_sort - sorting an array using selection sort
 * @array: an array to sort
 * @size: size of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
        size_t idx = 1;
        while (idx < size)
        {
                sortArray(array, idx);
                print_array(array, size);
                idx++;
        }
}
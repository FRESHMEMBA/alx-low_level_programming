#include "search_algos.h"

/**
 * print_array - prints the elements of an array
 * @array: pointer to the array to be printed
 * @first: index of the first element in the array
 * @last: index of the last element in the array
 * Return: void 
 */
void print_array(int *array, int first, int last)
{
    int i;

    for (i = first; i <= last; i++)
    {
        printf("%d", array[i]);

        if (i != last)
            printf(", ");
    }
    printf("\n");
}


/**
 * binary_search -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
    int mid;
    int first = 0, last = size - 1;

    /* return -1 if array is a null pointer or if the array is empty*/
    if (!array)
        return (-1);

    while(first <= last)
    {
        printf("Searching in array: ");
        print_array(array, first, last);
        mid = (first + last) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            first = mid + 1;
        else
            last = mid - 1;
    }

    /* return -1 if the value is not in the array*/
    return (-1);
}

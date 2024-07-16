#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * using the Linear search algorithm
 * 
 */
int linear_search(int *array, size_t size, int value)
{
    int *temp = array;
    size_t i;

    /* return NULL if array is a null pointer or if the array is empty*/
    if (!array || !size)
        return (NULL);

    for (i = 0; i < size; i++) /*traverse the array*/
        if (array[i] == value)
            return (i); /*return the first index of value in array*/

    /* return NULL if the value is not in the array*/
    return (NULL);
}
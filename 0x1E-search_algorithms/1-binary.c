#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * 
 * Return:  the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t height = size - 1;
    size_t midl = (low + height) / 2;

    while (low <= height)
    {
        if (array[midl] == value)
        {
            return (midl);
        }
        else if (array[midl] < value)
        {
            low = midl + 1;
        }
        else
        {
            height = midl - 1;
        }
    }
    return (-1);
}
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for the value in an array of integers
 * using Linear Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first idx where the value is located, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}

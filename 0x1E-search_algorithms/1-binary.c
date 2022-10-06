#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: If value is not present in array or if array is NULL, returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, mid;

	if (!array || size == 0)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ");
		printArray(array, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			printf("Found %d at index: %ld\n\n", value, mid);
			return (mid);
		}
		else if (value > array[mid])
		{
			left = mid + 1;
			printArray(array, right + 1);
		}
		else
		{
			right = mid - 1;
			printArray(array, right + 1);
		}
	}
	return (-1);
}

/**
 * printArray - prints element in an array of integers
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * Return:  Nothing
 */

void printArray(const int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i < size)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

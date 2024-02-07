#include "search_algos.h"
/**
 * advanced_binary - function that searches for a value in a sorted array
 * of integers using the advanced_binary algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursion(array, low, high, value));
}

/**
 * binary_recursion - Recursive function to find the first index.
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @array: Pointer to the array of integers.
 * @value: The value to search for.
 *
 * Return: The first index where 'value' is located, or 'middle' if not found.
 */
int binary_recursion(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	mid = (low + high) / 2;
	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (binary_recursion(array, low, mid, value));
	}
	else if (array[mid] > value)
		return (binary_recursion(array, low, mid - 1, value));
	else
		return (binary_recursion(array, mid + 1, high, value));
}

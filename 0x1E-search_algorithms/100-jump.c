#include "search_algos.h"
/**
 * jump_search - pointer to the first element of the array to search in
 * @array: number of elements in array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t next = 0, i, prev = 0;

	if (!array)
		return (-1);

	while (array[next] < value && next < size)
	{
		printf("Value checked array[%lu] = [%d]\n", next, array[next]);
		prev = next;
		next += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
	for (i = prev; i <= next && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

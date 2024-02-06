#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int prev = 0;
	int min = 0;
	int i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (prev < (int)size && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;

		if (prev >= (int)size)
			break;
	}
	min = prev - step;
	printf("Value found between indexes [%d] and [%d]\n", min, prev);
	for (i = min; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (array[i] >= value)
			break;
	}
	return (-1);
}

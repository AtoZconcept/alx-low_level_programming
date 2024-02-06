#include "search_algos.h"
/**
 * jinterpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located
*/
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)(size - 1);
	int pos = 0;

	if (array == NULL)
		return (-1);

	while (left <= right && value >= array[left] && value <= array[right])
	{
		pos = left + (((double)(right - left) / (array[right] - array[left]))\
			* (value - array[left]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);

			if (array[pos] < value)
				left = pos + 1;
			else
				right = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", pos);

	return (-1);
}

#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, m;

	r = size - 1;
	l = 0;
	if (!array)
		return (-1);

	while (l <= r)
	{
		m = ((l + r) / 2);

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}

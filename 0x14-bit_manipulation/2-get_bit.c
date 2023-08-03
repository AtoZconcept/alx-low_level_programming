#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: number to searched
 * @index: index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = (n >> index) & 1;
	return (a);
}

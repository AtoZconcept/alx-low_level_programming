#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: String containing binary number
 *
 * Return: the converted number, or 0 if b is NULL or not 0, 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int deci = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		deci = 2 * deci + (b[a] - '0');
	}
	return (deci);
}

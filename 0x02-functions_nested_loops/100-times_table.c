#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;

			_putchar((j == 0) ? (k + '0') :
			         (k < 10) ? (_putchar(','), _putchar(' '), _putchar(' '), _putchar(' '), (k + '0')) :
			         (k < 100) ? (_putchar(','), _putchar(' '), _putchar(' '), _putchar((k / 10) + '0'), _putchar((k % 10) + '0')) :
			                     (_putchar(','), _putchar(' '), _putchar((k / 100) + '0'), _putchar(((k / 10) % 10) + '0'), _putchar((k % 10) + '0')));
		}
		_putchar('\n');
	}
}

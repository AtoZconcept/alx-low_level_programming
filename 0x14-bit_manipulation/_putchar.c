#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdard output
 * @c: the char to print
 *
 * Return: if  success 1, error -1 should be return and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

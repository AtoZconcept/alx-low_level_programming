#include "lists.h"
/**
 * print_dlistint - print
 * @h: pointer to the next list
 *
 * Return: length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
		i++;
	}

	return (i);
}

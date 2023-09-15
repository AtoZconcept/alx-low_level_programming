#include "lists.h"
/**
 * dlistint_len - print out
 * @h: pointer
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

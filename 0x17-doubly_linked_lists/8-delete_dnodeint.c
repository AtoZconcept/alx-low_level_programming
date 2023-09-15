#include "lists.h"
/**
 * delete_dnodeint_at_index - delete at index
 * @head: head pointer
 * @index: index at the point
 *
 * Return: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next = current->next;
		if (next != NULL)
		{
			next->prev = NULL;
		}
		free(current);
		*head = next;
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			next = current->next;
			if (current->prev != NULL)
			{
				current->prev->next = next;
			}
			if (next != NULL)
			{
				next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}

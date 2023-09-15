#include "lists.h"
/**
 * free_dlistint - free
 * @head: head pointer
 *
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

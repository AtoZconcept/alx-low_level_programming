#include "lists.h"
/**
 * add_dnodeint_end - add
 * @head: head poiter
 * @n: data
 *
 * Return: address newNode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;

		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;

	return (*head);
}

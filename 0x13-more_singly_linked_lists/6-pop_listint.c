#include "lists.h"

/**
 * pop_listint - Function deletes the head node of a listint_t linked list
 * @head: Pointer to thefirst element in the linked list
 *
 * Return: Head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}

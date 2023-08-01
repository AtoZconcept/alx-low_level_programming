#include "list.h"

/**
 * get_nodeint_at_index - The nth node of a listint_t linked list
 * @head: First node in the in the linked list
 * @index: index of the node, starting at 0
 *
 * Return: If the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}


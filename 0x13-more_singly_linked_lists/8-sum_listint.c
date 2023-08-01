#include "lists.h"

/**
 * sum_listint - Calculte sum of all the data (n) of a listint_t linked list
 * @head : First node in the linked list
 *
 * Return: Return sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

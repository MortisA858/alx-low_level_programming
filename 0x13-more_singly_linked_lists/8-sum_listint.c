#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new_node;

	new_node = head;
	while (new_node != NULL)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}

	return (sum);
}

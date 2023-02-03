#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list. Sets head to NULL
 * @head: double pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node, *temp;

	temp = *head;
	while (temp)
	{
		new_node = temp->next;
		free(temp);
		temp = new_node;
	}

	*head = NULL;
}

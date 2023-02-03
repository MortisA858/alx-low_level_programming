#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list. Sets head to NULL
 * @head: double pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

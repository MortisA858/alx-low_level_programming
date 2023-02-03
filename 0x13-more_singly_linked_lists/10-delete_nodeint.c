#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: poiter to a pointer to the first node of the linked list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	for (i = 0; i < index - 1 && node->next != NULL; i++)
	{
		node = node->next;
	}

	if (node->next == NULL)
		return (-1);

	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}

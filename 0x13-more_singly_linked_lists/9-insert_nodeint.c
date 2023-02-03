#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position in linked list
 * @head: pointer to a pointer to the first node of the linked list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data for the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		node = *head;
		for (i = 0; i < idx - 1 && node != NULL; i++)
		{
			node = node->next;
		}
		if (node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}


#include "lists.h"

/**
 * get_nodeint_at_index - it returns the nth node of a linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to return, starting at 0
 *
 * Return: index to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	return (i == index ? node : NULL);
}

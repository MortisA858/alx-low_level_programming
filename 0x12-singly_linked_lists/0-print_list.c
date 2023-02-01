#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that takes as input a constant pointer to a
 * list_t (structure representing the head of a singley linked list) and
 * @h: pointer to of a linked list
 *
 * Return: the number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	/* Variable count stores number of nodes and its value is set to 0. */
	size_t count = 0;

	/* traverse through the linked list */
	while (h != NULL)
	{
		/* If 'str' member is 'NULL', print [0] (nil) */
		/* If 'str' member is not 'NULL', print [h->len] h-> str */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		/* Move to the next node in the linked list */
		/* Increment the number of nodes */
		h = h->next;
		count++;
	}

	return (count);
}

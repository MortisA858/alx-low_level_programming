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
	/*Initialize a counter for the number of nodes */
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}

	return (count);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all elements of a llinked list
 * list_t - (structure representing the head of a singley linked list) and
 * @h: pointer to the list_t to print
 *
 * Return: the number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	/*Initialize a counter for the number of nodes */
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		count++;
		h = h->next;
	}

	return (count);
}

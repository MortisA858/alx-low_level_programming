#include "lists.h"

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
	size_t count = 1;
	const list_t *temp = h;

	/* traverse through the linked list */
	while (temp)
	{
		/* If 'str' member is 'NULL', print [0] (nil) */
	       /* If 'str' member is not 'NULL', print [h->len] h-> str */
		if (temp->str == NULL)
		{
			printf("[%d] (nill)\n", temp->len);
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}

		temp = temp->next;
		count++;
	}

	return (count);
}

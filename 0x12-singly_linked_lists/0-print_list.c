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

	/* while the head of the list is not NULL */
	while (h != NULL)
	{
		if (h->str == NULL)/*If current node's string is NULL*/
		{
			/*Prints length of string as [len] (nil)*/
			printf("[%u] (nil)\n", h->len);
		}
		else
		{
			/*print length of current node as [len] str*/
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next; /*Move the head pointer to the next node in list*/
		count++;/* Increment the number of nodes */

	}

	return (count); /*Return the count nodes*/
}

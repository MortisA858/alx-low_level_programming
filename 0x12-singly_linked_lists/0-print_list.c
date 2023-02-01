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
	/**
	 * Initialize a variable count to store the number of nodes in the linked list
	 * Initial value of 'count' is set to 0.
	 */
	size_t count = 0;

	/**
	 * Use 'while' loop to traverse the linked list.
	 * The loop continues as long as the input pointer 'h' is not 'NULL'
	 */
	while (h)
	{
		/**
		 * Check if 'str' member of current node('h->str') is NULL
		 * If 'str' member is 'NULL', print [0] (nill)
		 * If 'str' member is not 'NULL', print [h->len] h-> str
		 */
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		/**
		 * Move to the next node in the linked list by setting h = h->next
		 * Increment the count variable by 1
		 * Repeat the loop until all nodes in the linked list have been
		 * processed.
		 */
		count++;
		h = h->next;
	}
	/* Return the number of noeds in the linked list ('count')*/
	return (count);
}

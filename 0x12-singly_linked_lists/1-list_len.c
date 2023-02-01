#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list_t list
 * @h: Pointer to the list_t structure
 *
 * Return: number of elements in the linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /* Initialize a count variable to 0 */
	const list_t *current = h; /* Create a pointer to the head of the list*/

	/* Loop through the linked list */
	while (current != NULL)
	{
		count++; /* Increment the count for each node in the list */
		current = current->next; /* Move to the next node */
	}

	return (count); /* Return the count of elements in the linked list */
}

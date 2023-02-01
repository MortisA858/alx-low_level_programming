#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: double pointer to head of list
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp; /*Declare a pointer to a list_t structure called temp */

	while (head)/*While the head of the list is not NULL*/
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

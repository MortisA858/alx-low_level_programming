#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: double pointer to head of the list
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	/*Temporary pointer 'temp' is declared and intialized to head*/
	listint_t *temp;
	/*While loop runs as long as head is not equal to NULL*/
	while (head != NULL)
	{
		temp = head;/*Within the loop, temp is set to head*/
		/*head is set to head->next(points to next node in the list)*/
		head = head->next;
		/*memory pointed by temp is freed using free function*/
		free(temp);
		/**
		 * Loop continues to run, freeing each node in the list
		 * until head becomes NULL
		 */
	}
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data (n)
 * @head: double pointer to the list
 *
 * Return: the head nodes data(n). If linked list is empty, return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;/*temp is used to freeing the memory*/
	int n;

	/*Checking if linked list is empty by checking if *head is NULL*/
	if (*head == NULL)
		return (0);

	/*If linked list is not empty:*/
	temp = *head;/*function declares pointer temp to current head node*/
	n = temp->n;/*function declares variable n to store head node's data*/
	*head = temp->next;/*function sets value of *head to next node in list*/
	free(temp);/*Freeing memory occupied by deleted head node*/

	return (n);/*Value of n, which is data of deleted node is returned*/
}

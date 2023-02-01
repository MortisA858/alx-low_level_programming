#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to head of list
 * @str: string to be duplicated and added as new node
 *
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t)); /* Allocate memory for new_node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);/*Dupliacate string, store it in new_node*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str); /*Store length of string in new_node*/
	new_node->next = NULL; /*Set next pointer of new_node to NULL*/

	if (*head == NULL) /*If list is empty, set new_node as head*/
		*head = new_node;
	else /*If list is not empty, traverse to end and add new_node*/
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

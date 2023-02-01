#include "lists.h"

/**
 * add_node - functiio that adds a new node at the beginning of a list_t list
 * @head: a pointer to the address of the head of the list_t list
 * @str: new string to add to the node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Creates a pointer to a list_t structure called new_node */
	list_t *new_node;

	/* Allocate memory for a new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* Checks if memory allocation failed */
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Duplicate the string and store its address in the new code */
	new_node->str = strdup(str);
	/**
	 * Checks if string duplication failed and returns NULL if it did
	 * If string duplication succeeded, it continues to the next step
	 */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*Stores length of duplicated string in the len member of new node*/
	new_node->len = strlen(str);
	/*Store address of current head of list in next member of new node*/
	new_node->next = *head;
	*head = new_node; /*Update head of list to be address of the new node*/

	return (new_node); /* Return the address of the new node */
}

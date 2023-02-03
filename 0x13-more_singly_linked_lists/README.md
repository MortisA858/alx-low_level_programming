0. Print list
Explanation:

#include <stdio.h>
#include "lists.h"

stdio.h is included for using the printf function, and lists.h is included for the definition of the listint_t structure.

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
The print_listint function is defined to take a pointer h to the head of a listint_t list as an argument, and returns the number of nodes in the list as a size_t value. The count variable is declared and initialized to 0, to keep track of the number of nodes in the list.

    while (h)
    {
        printf("%d\n", h->n);
The while loop is used to iterate over the linked list. The loop continues as long as h is not NULL. On each iteration of the loop, the value of the current node is printed using the printf function. The %d format specifier is used to print the integer value of h->n. The \n character is used to print a newline after the value, to format the output as expected.

        h = h->next;
        count++;
    }
After printing the value of the current node, the h pointer is updated to point to the next node in the list by assigning h->next to h. The count variable is incremented to keep track of the number of nodes processed so far.

    return (count);
}
Finally, the count variable is returned as the result of the function, indicating the number of nodes in the list.



1. List length


2. Add node


3. Add node at the end


4. Free list
Explanation:

The function takes a pointer head to the first node in a linked list of type listint_t.

A temporary pointer temp is declared and initialized to head.
The while loop runs as long as head is not equal to NULL.

Within the loop, temp is set to head, head is set to head->next (which points to the next node in the list).

The memory pointed to by temp is freed using the free function.

The loop continues to run, freeing each node in the list, until head becomes NULL.



5. Free
Explanation:

#include "lists.h" is a preprocessor directive to include the header file lists.h in the program. This header file contains the definition of the data structure listint_t and any other required type or constant definitions for the linked list.

The next line is a block comment that describes the purpose of the function and the arguments it takes. The @head argument is a double pointer to the head of the list.

The line void free_listint2(listint_t **head) declares the function free_listint2 and takes a double pointer head as its argument.

The line if (head == NULL) return; checks if the double pointer head is NULL. If it is, the function immediately returns without doing anything. This is to prevent accessing NULL pointers.

The line listint_t *temp; declares a pointer temp of type listint_t.

The while loop starts with the condition *head != NULL. The loop continues as long as the value pointed to by *head is not NULL.

Within the loop, the line temp = *head; sets temp to the value pointed to by *head.

The line *head = (*head)->next; updates the value pointed to by *head to the next node in the list.

The line free(temp); frees the memory pointed to by temp, which was the current node of the list.

The loop continues until the value pointed to by *head is NULL, at which point the function returns.



6. Pop
Explanation:

First, the function checks if the linked list is empty by checking if *head is NULL. If it is, the function returns 0.

If the linked list is not empty, the function declares a pointer temp to the current head node and a variable n to store the head node's data.

The function sets the value of *head to the next node in the linked list (i.e., temp->next), effectively deleting the current head node.

The function frees the memory occupied by the deleted head node by calling free(temp).

Finally, the function returns the value of n, which is the data of the deleted head node.



7. Get node at index
Explanation:

The function takes a pointer head to the first node of the linked list and an index as input.

The function declares a variable i to keep track of the current index, a pointer node to traverse the linked list, and sets it to head.

The function uses a for loop to iterate through the linked list. The loop continues as long as i is less than index and node is not NULL.

In each iteration, the function sets node to the next node in the linked list (node->next).

After the loop, if i is equal to index, the function returns node, which is the nth node.

If i is not equal to index, the function returns NULL, indicating that the node at the given index does not exist in the linked list.



8. Sum list
Explanation:

The function takes a pointer head to the first node of the linked list as input.

The function declares a variable sum to store the sum of all the data and a pointer node to traverse the linked list, and sets it to head.

The function uses a while loop to iterate through the linked list. The loop continues as long as node is not NULL.

In each iteration, the function adds the current node's data (node->n) to sum and sets node to the next node in the linked list (node->next).

After the loop, the function returns sum, which is the sum of all the data in the linked list. If the list is empty, sum will be 0.



9. Insert
Explanation:

The function takes a pointer head to a pointer to the first node of the linked list, an idx (index of the list where the new node should be added), and an n (data for the new node) as input.

The function declares a variable i to keep track of the current index, a pointer node to traverse the linked list, and a pointer new_node to the new node, and sets node to *head.

The function uses a for loop to iterate through the linked list until it reaches the node just before the desired index (idx - 1). The loop continues as long as i is less than idx - 1 and node is not NULL.

If node is NULL, the function returns NULL as it is not possible to add the new node at the given index.

The function uses malloc to allocate memory for the new_node and initializes the new node's data (new_node->n = n). If malloc returns NULL, the function returns NULL indicating that memory allocation failed.

The function sets the next node of the new node to be the node that used to come after the node just before the desired index (new_node->next = node->next).

The function sets the next node of the node just before the desired index to be the new node (node->next = new_node).

The function returns the pointer to the new node.



10. Delete at index
Explanation:

The function takes a pointer head to a pointer to the first node of the linked list, and an index (index of the node that should be deleted) as input.

The function checks if the linked list is empty, and returns -1 if it is.

The function declares a variable i to keep track of the current index, a pointer node to traverse the linked list, and a pointer temp to the node that will be deleted, and sets node to *head.

If the index of the node to be deleted is 0 (i.e., the head node), the function sets the head node to be the next node (*head = node->next), frees the memory occupied by the head node (free(node)), and returns 1 indicating success.

The function uses a for loop to iterate through the linked list until it reaches the node just before the desired index (index - 1). The loop continues as long as i is less than index - 1 and node->next is not NULL.

If node->next is NULL, the function returns -1 indicating that the node does not exist at the given index.

The function sets temp to the node that will be deleted (temp = node->next), sets the next node of the node just before the desired index to be the node that comes after the node to be deleted (node->next = temp->next), and frees the memory occupied by the node to be deleted (free(temp)).

The function returns 1 indicating success.




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


7. Get node at index


8. Sum list


9. Insert


10. Delete at index

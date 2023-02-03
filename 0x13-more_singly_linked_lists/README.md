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


5. Free


6. Pop


7. Get node at index


8. Sum list


9. Insert


10. Delete at index

0. Print list


1. List length
Explanation:

size_t count = 0: We initialize a count variable to 0 to keep track of the number of elements in the linked list. size_t is an unsigned integer type that is guaranteed to be large enough to represent the size of any object in bytes.

const list_t *current = h: We create a pointer current to the head of the linked list h. We use the const keyword to indicate that the current pointer will not modify the linked list.

while (current != NULL): This loop continues until current points to NULL, which indicates the end of the linked list.

count++: We increment the count variable for each node in the linked list.

current = current->next: We move the current pointer to the next node in the linked list.

return count: We return the count variable, which represents the number of elements in the linked list.

2. Add node


3. Add node at the end


4. Free list



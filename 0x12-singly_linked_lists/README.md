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
Explanation:

list_t *new_node = malloc(sizeof(list_t)): We allocate memory for a new list_t node using the malloc function. malloc returns a pointer to a block of memory of the specified size.

if (new_node == NULL): If the memory allocation fails, malloc returns NULL, so we check if new_node is NULL. If it is, we return NULL to indicate that the node creation failed.

new_node->str = strdup(str): We duplicate the string str using the strdup function and store its address in the new node's str member. strdup returns NULL if memory allocation fails, so we check if new_node->str is NULL.

if (new_node->str == NULL): If strdup fails, we free the memory of the newly created node using free and return NULL to indicate that the node creation failed.

new_node->next = *head: We make the new node's next member point to the current head of the list.

*head = new_node: We make the new node the new head of the list by updating the head pointer.

return new_node: We return the address of the new node to indicate that the node creation was successful.


3. Add node at the end


4. Free list



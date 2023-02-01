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


The function add_node adds a new node to a linked list at the beginning of the list. It takes two arguments: head, which is a double pointer to the head of the list, and str, which is the string to be duplicated and stored in the new node.

list_t *new; creates a pointer to a list_t structure called new.

new = malloc(sizeof(list_t)); allocates memory for the new node using malloc and stores the address in new.

if (new == NULL) checks if the memory allocation failed, and returns NULL if it did.

new->str = strdup(str); duplicates the string str using strdup and stores it in the str member of the new node.

if (new->str == NULL) checks if the string duplication failed, and returns NULL if it did. If the string duplication succeeded, it continues to the next step.

new->len = strlen(str); stores the length of the duplicated string in the len member of the new node.

new->next = *head; stores the address of the current head of the list in the next member of the new node.

*head = new; updates the head of the list to be the address of the new node.

return (new); returns the address of the new node.

3. Add node at the end


4. Free list



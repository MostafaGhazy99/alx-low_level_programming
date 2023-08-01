#include "lists.h"
#include <stdlib.h>
/* Include the standard library header for malloc and free */
/**
 * insert_nodeint_at_index - Inserts node at given position in linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @idx: Index of the list where new node should be added (starting from 0).
 * @n: Data (n) to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int count = 0;
if (head == NULL)
return (NULL);

/* Create the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0) /* Insert at the beginning of the list */
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
current = *head;
while (current != NULL && count < (idx - 1))
{
current = current->next;
count++;
}
if (current == NULL) /* The index is out of bounds */
{
free(new_node);
return (NULL);
}

/* Insert the new node after the current node */
new_node->next = current->next;
current->next = new_node;
return (new_node);
}

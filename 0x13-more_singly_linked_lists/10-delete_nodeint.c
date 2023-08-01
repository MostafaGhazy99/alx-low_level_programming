#include "lists.h"
#include <stdlib.h>

/* Add the standard library header */
/**
 * delete_nodeint_at_index - Del node at gvn position list_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0) /* Special case: Deleting the head node */
{
*head = current->next;
free(current);
return (1);
}
/* Traverse to the node at the specified index */
while (current != NULL && count < index)
{
prev = current;
current = current->next;
count++;
}
if (current == NULL) /* The index is out of bounds */
return (-1);
/* Remove the node at the specified index */
prev->next = current->next;
free(current);
return (1);
}

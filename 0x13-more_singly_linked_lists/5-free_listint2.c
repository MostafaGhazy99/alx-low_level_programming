#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *next;
if (head == NULL || *head == NULL)
return;
current = *head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL; /* Set head to NULL after freeing the list */
}

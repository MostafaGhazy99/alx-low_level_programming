#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL); /* Memory allocation failed */
}
/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;
/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse the list to the end to append the new node */
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}

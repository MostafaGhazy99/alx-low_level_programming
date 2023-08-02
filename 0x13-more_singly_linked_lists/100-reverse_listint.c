#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next;
while (current != NULL)
{
next = current->next; /* Store the next node */
current->next = prev; /* Reverse the link */
prev = current;       /* Move prev and current one step ahead */
current = next;
}

*head = prev; /* Update the head to the last node (prev) */
return (*head);
}

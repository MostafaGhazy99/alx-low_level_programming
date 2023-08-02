#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;
slow = fast = head;
while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;
count++;
if (slow == fast)
{
/* Loop detected, exit with status 98 */
printf("[%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}
/* Print the last node (if it is not already printed in a loop) */
if (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
}
return (count);
}

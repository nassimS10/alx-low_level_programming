#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - Free listint2.
 * @head: ptr of param head
 *
 * Return : empty without return
 */

void free_listint2(listint_t **head)
{
listint_t *still;

if (!head)
return;

while (*head != NULL)
{
still = (*head)->next;
free(*head);
*head = still;
}
head = NULL;
}

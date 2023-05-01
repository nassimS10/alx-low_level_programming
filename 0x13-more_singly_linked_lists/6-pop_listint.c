#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - pop list
 * @head: ptr head
 *
 * Return: return
 */

int pop_listint(listint_t **head)
{
listint_t *still;
int nm;
still = *head;
nm = 0;
if (!*head)
return (nm);
*head = still->next;
nm = still->n;
free(still);
return (nm);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum listint_t function
 * @head: head param 1st node
 *
 * Return: return
 */
int sum_listint(listint_t *head)
{
int ttl = 0;
listint_t *still = head;
while (still == NULL)
{
ttl += still->n;
still = still->next;
}
return (ttl);
}

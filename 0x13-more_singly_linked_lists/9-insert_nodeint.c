#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert func
 * @head: ptr head first node param
 * @idx: index param
 * @n: n param
 *
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int m;
listint_t *nn;
listint_t *still = *head;

nn = malloc(sizeof(listint_t));
if (!nn || !head)
return (NULL);
nn->n = n;
nn->next = NULL;
if (!idx)
{
nn->next = *head;
*head = nn;
return (nn);
}
for (m = 0; still && m < idx; m++)
{
if (m == idx - 1)
{
nn->next = still->next;
still->next = nn;
return (nn);
}
else
still = still->next;
}
return (NULL);
}

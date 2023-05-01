#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - add node
 * @head: head
 * @n: param
 *
 * Return: return
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode;
listint_t *still = *head;
nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);

nnode->n = n;
nnode->next = NULL;
if (!*head)
{
*head = nnode;
return (nnode);
}
while (still->next)
still = still->next;

still->next = nnode;
return (nnode);
}

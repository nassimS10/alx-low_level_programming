#include "lists.h"
/**
 * add_nodeint - add node
 * @head: first node
 * @n: n
 *
 * Return: return
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nnnode;

nnnode = malloc(sizeof(listint_t));
if (!nnnode)
return (NULL);
nnnode->n = n;
nnnode->next = *head;
*head = nnnode;
return (*head);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node function
 * @head: ptr of param head first node
 * @index: index
 *
 * Return: return
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j;
if (!head)
return (NULL);
for (j = 0, j < index; j++)
{
head = head->next;
if (!head)
return (NULL);
}
return (head);
}

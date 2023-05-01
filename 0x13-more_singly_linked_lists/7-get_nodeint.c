#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node function
 * @head: ptr head param first node
 * @index: index param
 *
 * Return: return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *still = head;
	unsigned int j = 0;

while (still)
{
if (j == index)
return (still);
still = still->next;
j++;
}
return (NULL);
}


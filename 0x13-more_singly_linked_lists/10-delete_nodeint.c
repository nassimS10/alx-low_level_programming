#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes nodeint func
 * @head: prt head first node param
 * @index: param index
 *
 * Return: return
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *still, *cp = *head;
unsigned int nd;
if (!cp)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(cp);
return (1);
}
for (nd = 0; nd < (index - 1); nd++)
{
if (cp->next == NULL)
return (-1);
cp = cp->next;
}
still = cp->next;
cp->next = still->next;
free(still);
return (1);
}

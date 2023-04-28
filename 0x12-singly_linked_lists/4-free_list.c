#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - free list
 * @head: head
 */
void free_list(list_t *head)
{
list_t *go;
while (head)
{
go = head->next;
free(head->str);
free(head);
head = go;
}
}

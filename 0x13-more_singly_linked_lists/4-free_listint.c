#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint -  frees function
 * @head: ptr head first node
 *
 * Return: empty
 *
 */

void free_listint(listint_t *head)
{
	listint_t *stilln;

while (head != NULL)
{
stilln = head->next;
free(head);
head = stilln;
}
}

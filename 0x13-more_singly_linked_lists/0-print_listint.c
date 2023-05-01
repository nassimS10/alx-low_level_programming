#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: listint_h h
 *
 * Return: return nm
 **/
size_t print_listint(const listint_t *h)
{
size_t nm = 0;
while (h)
{
printf("%d\n", h->n);
nm++;
h = h->next;
}
return (nm);
}

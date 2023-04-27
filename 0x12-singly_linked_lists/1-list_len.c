#include "lists.h"
#include <stdio.h>
/**
 * list_len - list len
 * @h: h
 *
 * Return: return
 */

size_t list_len(const list_t *h)
{
size_t o = 0;
while (h)
{
o++;
h = h->next;
}
return (0);
}

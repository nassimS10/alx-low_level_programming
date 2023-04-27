#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
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
return (o);
}

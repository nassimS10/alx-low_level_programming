#include "lists.h"
#include <stdio.h>
/**
 * listint_len - link list
 * @h: h
 *
 * Return: return
 *
 */
size_t listint_len(const listint_t *h)
{
size_t pw = 0;
while (h)
{
pw++;
h = h->next;
}
return (pw);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node
 * @head: hrad of node
 * @str: string
 *
 * Return : return
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->l = l;
n->next = (*head);
(*head) = n;
return (*head);
}

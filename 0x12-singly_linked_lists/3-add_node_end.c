#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at the end
 *
 * @head: d pointer head
 * @str: string
 *
 * Return: return
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node;
list_t *c_node = *head;
unsigned int str_l = 0;
while (str[str_l])
str_l++;
n_node = malloc(sizeof(list_t));
if (!n_node)
return (NULL);
n_node->str = strdup(str);
n_node->len = str_len;
n_node->next = NULL;
if (*head == NULL)
{
*head = n_node;
return (n_node);
}
while (c_node->next)
c_ node = c_node->next;
c_node->next = n_node;
return (n_node);
}

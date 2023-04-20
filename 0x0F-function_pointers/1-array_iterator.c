#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Func
 * @array: arr
 * @size: size
 * @action: ptr
 * Return: return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array == NULL || action == NULL)
{
return;
}
for (a = 0; a < size; a++)
{
action(array[a]);
}
}

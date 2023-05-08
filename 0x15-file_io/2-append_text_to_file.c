#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text func
 *
 * @filename: filename param in the func
 * @text_content: text content param in the func
 *
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
int wrr, opp, ln = 0;

if (!filename)
return (-1);

if (text_content)
{
for (ln = 0; text_content[ln];)
ln++;
}
opp = open(filename, O_WRONLY | O_APPEND);
wrr = write(opp, text_content, ln);
if (opp == -1 || wrr == -1)
return (-1);
close(opp);
return (1);
}

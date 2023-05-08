#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - Creates file in func
 *
 * @filename: param filename str in the func
 * @text_content: str param text content in the func
 *
 * Return: return
 */

int create_file(const char *filename, char *text_content)
{
int fopp, wrr, ln = 0;

if (!filename)
return (-1);
if (text_content)
{
for (ln = 0; text_content[ln];)
ln++;
}
fopp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fopp, text_content, ln);

if (fopp == -1 || wr == -1)
return (-1);

close(fopp);

return (1);
}

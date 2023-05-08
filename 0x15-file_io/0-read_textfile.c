#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile- readtext file finc
 *
 * @filename: char param of filename in the func
 * @letters: letters param in the func
 *
 * Return: return wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buerr;
ssize_t opfile, wr, tt;
opfile = open(filename, O_RDONLY);
if (opfile == -1)
return (0);
buerr = malloc(sizeof(char) * letters);
tt = read(opfile, buerr, letters);
wr = write(STDOUT_FILENO, buerr, tt);

free(buerr);
close(opfile);
return (wr);
}

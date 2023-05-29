#include "main.h"

/**
 * char *_strcpy - string pointed to by src
 * @tt: to
 * @src: from
 * Return: string
 */
char *_strcpy(char *tt, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
tt[x] = src[x];
}
tt[l] = '\0';
return (tt);
}


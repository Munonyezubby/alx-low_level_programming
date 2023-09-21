#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int k, r;

p = 0;
k = 0;

while (dest[p] != '\0')
{
	p++;
}

while (src[k] != '\0')
{
	dest[p] = src[k];
	p++;
	k++;
}
dest[p] = '\0';
return (dest);
}

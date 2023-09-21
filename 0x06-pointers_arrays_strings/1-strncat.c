#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int p, k;

	p = 0;
	k = 0;

	while (dest[p] != '\0')
	{
	p++;
	}
	while (k < n && src[k] != '\0')
	{
	dest[p] = src[k];
	p++;
	k++;
	}
	dest[p] = '\0';
	return (dest);
}

#include "main.h"

/**
  * _strncpy - The main function for task 2
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
	{
	dest[p] = src[p];
	p++;
	}
	while  (p < n)
	{
	dest[p] = '\0';
	p++;
	}
	return (dest);
}

#include "main.h"

/**
  * _memcpy - main function prototype for task 1
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
	dest[p] = src[p];
	}
	return (dest);
}

#include "main.h"

/**
  * _strstr - main function for task 5
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *K = haystack;
	char *P = needle;

	while (*K == *P && *P != '\0')
	{
	K++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}

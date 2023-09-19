#include "main.h"
/**
 * _strlen - function name for task 2
 * @s: function parameter
 * Return: the lenght
 */

int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0; s[k] != '\0'; k++)
		count++;
	return (count);
}

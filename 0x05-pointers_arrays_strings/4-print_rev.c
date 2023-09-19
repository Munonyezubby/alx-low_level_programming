#include "main.h"
/**
 * print_rev - function name for task 4
 * @s: function parameter
 */


void print_rev(char *s)

{
	int k;
	int count = 0;

	for (k = 0; s[k] != '\0'; k++)
		count++;

	for (k = count - 1; k >= 0; k--)
	_putchar (s[k]);
	_putchar ('\n');
}

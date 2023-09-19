#include "main.h"
/**
 * _puts - function name for task 3
 * @str: function parameter
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	_putchar (str[k]);
	_putchar ('\n');
}

#include "main.h"

/**
 * print_number - main function for task 9
 *
 * @n: Function parameter
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
	putchar('-');
	n1 = -n;
	}

	if (n1 / 10 != 0)
	{
	print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
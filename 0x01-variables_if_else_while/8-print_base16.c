#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int o;
	char d;

	for (o = 0; o < 10; o++)
		putchar((o % 10) + '0');

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');
	return (0);
}

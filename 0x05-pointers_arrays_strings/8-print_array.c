#include "main.h"
/**
 * print_array - the function name of task 8
 * @a: parameter 1
 * @n: parameter 2
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	printf(",");
}
printf("\n");
}

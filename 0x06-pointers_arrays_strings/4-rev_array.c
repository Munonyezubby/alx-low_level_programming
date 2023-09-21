#include "main.h"

/**
  * reverse_array - The main function for task 4
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int p, k;

	for (p = 0; p < n--; p++)
	{
	k = a[p];
	a[p] = a[n];
	a[n] = k;
	}
}

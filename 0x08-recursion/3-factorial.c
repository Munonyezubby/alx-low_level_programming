#include "main.h"

/**
  * factorial - function parameter for task 3
  *
  * @n: function parameter
  *
  * Return: Function n.
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}

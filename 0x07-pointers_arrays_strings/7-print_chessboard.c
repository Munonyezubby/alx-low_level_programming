#include "main.h"

/**
  * print_chessboard - main function for task 6
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int p;
	int r;

	for (p = 0; p < 8; p++)
	{
	for (r = 0; r < 8; r++)
	_putchar(a[p][r]);
	_putchar('\n');
		}
}

#include "main.h"
#include <stdio.h>
/**
  *leet - main function for task 7
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int p, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
	for (k = 0; k < 10; k++)
	{
	if (n[p] == s1[k])
	{
	n[p] = s2[k];
	}
	}
	}
	return (n);
}

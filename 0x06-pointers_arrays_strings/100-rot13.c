#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function for task 8
 *
 * @s: String poiner
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int p, k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
	for (k = 0; k < 52; k++)
	{
	if (s[p] == data1[k])
	{
	s[p] = datarot[k];
	break;
	}
	}
	}
	return (s);
}

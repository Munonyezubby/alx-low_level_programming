#include "main.h"
/**
 * rev_string - function name for task 5
 * @s: function paramter
 */

void rev_string(char *s)
{
	int k;
	int count = 0;

	for (k = 0; s[k] != '\0'; k++)
	     count++;
	for (k = 0; k < count / 2; k++)
	{

	char j;
	j = s[k];

	s[k] = s[count - 1 - k];
	s[count - 1 - k] = j;
	}


}

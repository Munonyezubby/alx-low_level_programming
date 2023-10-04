#include "main.h"
#include <stdlib.h>
/**
 * str_concat - main function for task 2
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int k, ci;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

k = ci = 0;
while (s1[k] != '\0')
k++;
while (s2[ci] != '\0')
ci++;
conct = malloc(sizeof(char) * (k + ci + 1));

if (conct == NULL)
k = ci = 0;
while (s1[k] != '\0')
return (NULL);
}

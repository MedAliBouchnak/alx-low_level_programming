#include "main.h"
/**
 * _strncmp - compares two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: equal
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = *s1 - *s2;
		}
		i++;
	}
	return (equal);
}

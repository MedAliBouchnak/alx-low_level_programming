#include "main.h"
/**
 *print_line - entry point of the code
 *@n:var
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar('');
	}
	_putchar('\n');
}

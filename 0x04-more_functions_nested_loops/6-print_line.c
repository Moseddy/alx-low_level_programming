#include "main.h"

/**
 * print_line -> This function prints a line for
 * every number entered
 * @n: The argument of this function
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

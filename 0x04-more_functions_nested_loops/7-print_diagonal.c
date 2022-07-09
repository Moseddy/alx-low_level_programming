#include "main.h"

/**
 * print_diagonal -> This functon prints diagonally according
 * to the number entered
 * @n: The argument of the function
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}


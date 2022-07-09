#include "main.h"

/**
 * print_triangle -> This function prints a triangle
 * in the reverse order
 * @size: The argument passed into this function
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if ((i + j) <= size)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

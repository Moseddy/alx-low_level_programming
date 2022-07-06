#include "main.h"
/**
 * times_table -> This program prints the times table form 0 - 9
 * Return: the time table
 */
void times_table(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}

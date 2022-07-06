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
			c = a * b;
			if (c == 0)
			{
				_putchar(c + 48);
			}
			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + 48);
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48)
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

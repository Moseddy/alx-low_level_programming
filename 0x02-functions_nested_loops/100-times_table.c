#include "main.h"
/**
 * print_times_table -> This function prints the time table of any number
 * @n: This is the argument passed into the function
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 || n < 16)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + 48);
				}
				else if (k < 10 && j != 0)
				{
					_putchar(k + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

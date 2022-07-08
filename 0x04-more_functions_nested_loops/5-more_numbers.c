#include "main.h"

/**
 * more_numbers -> This function prints 0-14 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, k;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			k = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar( k + 48);
			j++;
		}
		i++;
		_putchar('\n');
	}
}

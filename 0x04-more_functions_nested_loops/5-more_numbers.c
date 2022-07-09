#include "main.h"

/**
 * more_numbers -> This function prints 0-14 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num);
		}
		_putchar('\n');
	}
}

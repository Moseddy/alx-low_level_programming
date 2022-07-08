#include "main.h"

/**
 * print_numbers -> This function prints numbers from 0-9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}

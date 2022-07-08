#include "main.h"

/**
 * print_numbers -> This function prints numbers from 0-9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}

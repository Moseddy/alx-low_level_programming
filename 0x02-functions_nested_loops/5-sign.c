#include "main.h"
/**
 * print_sign -> This function prints +, -, and 0
 * @n: This is the arguument of the function
 * Return: depending on n are 1, 0, and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

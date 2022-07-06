#include "main.h"
/**
 * print_last_digit -> This function prints the last digit of a number entered
 * @num: This is the argument of the function
 * Return: the last numver of the number entered
 */
int print_last_digit(int num)
{
	int r;

	if (num < 0)
	{
		num = -num;
	}
	r = num % 10;
	_putchar(r + 48);
	return (r);
}

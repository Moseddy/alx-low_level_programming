#include "main.h"
/**
 * print_last_digit -> This function prints the last digit of a number entered
 * @num: This is the argument of the function
 * Return: the last numver of the number entered
 */
int print_last_digit(int num)
{
	int remainder;

	if (num < 0)
	{
		num = -num;
		remainder = num % 10;
	}
	_putchar(remainder + 48);
	return (remainder);
}

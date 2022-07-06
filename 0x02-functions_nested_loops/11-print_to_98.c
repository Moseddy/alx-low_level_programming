#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -> This function prints numbers from any value to 48
 * @n: This is the integer argument for this function
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else if (n < 98)
		{
			printf("%d, ", n);
		}
		n++;
	}
	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else if (n > 98)
		{
			printf("%d, ", n);
		}
		n--;
	}
}

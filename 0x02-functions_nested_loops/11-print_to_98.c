#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -> This function prints numbers from any value to 48
 * @n: This is the integer argument for this function
 * Return: nothing
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		i = n;
		while (i <= 98)
		{
			if (i != 98)
			{
				printf("%d, ", i)
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
			i++;
		}
	}
	else if (n >= 98)
	{
		j = n;
		while (j >= 98)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				printf("%d\n", j);
			}
			j--;
		}
	}
}

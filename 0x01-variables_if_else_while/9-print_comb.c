#include <stdio.h>
/**
 * main -> This program prints a combination of 0-9
 * Return: Success always 0
 */
int main(void)
{
	int number;

	number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}

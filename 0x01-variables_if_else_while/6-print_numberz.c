#include <stdio.h>
/**
 * main -> This program prints 0-9 using the putchar function
 * Return: Succes always 0
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}

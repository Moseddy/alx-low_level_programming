#include <stdio.h>
/**
 * main -> This program prints the hexadecimal numbers in alphabets
 * Return: Success always 0
 */
int main(void)
{
	int number;

	number = 48;

	while (number < 102)
	{
		putchar(number);
		if (number == 57)
		{
			number += 39;
			number++;
		}
	}
	putchar('\n');
	return (0);
}

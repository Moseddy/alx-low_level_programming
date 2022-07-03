#include <stdio.h>
/**
 * main -> This program prints the hexadecimal numbers in alphabets
 * Return: Success always 0
 */
int main(void)
{
	int number;
	char alpha;

	number = 48;
	alpha = 'a';

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main -> This program prints a combination of numbers
 * Return: Success always 0
 */
int main(void)
{
	int number1;
	int number2;

	number1 = 0;

	while (number1 <= 99)
	{
		number2 = number1;
		while (number2 <= 99)
		{
			if (number2 != number1)
			{
				putchar((number1 / 10) + 48);
				putchar((number1 % 10) + 48);
				putchar(' ');
				putchar((number2 / 10) + 48);
				putchar((number2 % 10) + 48);
				if (number1 != 98 || number2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}

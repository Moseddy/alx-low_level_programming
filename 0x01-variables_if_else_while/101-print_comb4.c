#include <stdio.h>
/**
 * main -> This program prints a combination of 3 numbers without repetition
 * Return: Success always 0
 */
int main(void)
{
	int ch, num1, num2;

	ch = 48;

	while (ch <= 57)
	{
		num1 = 49;
		while (num1 <= 57)
		{
			num2 = 50;
			while (num2 <= 57)
			{
				if ((num2 > num1) && (num1 > ch))
				{
					putchar(ch);
					putchar(num1);
					putchar(num2);
					if (ch != 55 || num1 != 56 || num2 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num2++;
			}
			num1++;
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

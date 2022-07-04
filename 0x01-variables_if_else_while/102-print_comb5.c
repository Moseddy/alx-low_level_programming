#include <stdio.h>
/**
 * main -> This program prints a combination of numbers in a format
 * Return: Success always 0
 */
int main(void)
{
	int ch;
	int num1;
	int num2;
	int num3;

	ch = 48;

	while (ch <= 57)
	{
		num1 = 48;
		while (num1 <= 56)
		{
			num2 = 48;
			while (num2 <= 57)
			{
				num3 = 49;
				while (num3 <= 57)
				{
					if ((ch >= num1) && (num2 <= num3))
					{
						putchar(ch);
						putchar(num1);
						putchar(' ');
						putchar(num2);
						putchar(num3);
						if (ch != 57 || num1 != 56 || num2 != 57 || num3 != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
					num3++;
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

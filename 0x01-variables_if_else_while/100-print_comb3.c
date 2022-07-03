#include <stdio.h>
/**
 * main -> This program prints the combination of two numbers
 * Return: Success always 0
 */
int main(void)
{
	int num;
	int ch;

	num = 48;
	ch = 49;

	while (num <= 57)
	{
		while (ch <= 57)
		{
			if (ch > num)
			{
				putchar(num);
				putchar(ch);
				if (num != 56 && ch != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch++;
		}
		num++;
	}

	return (0);
}

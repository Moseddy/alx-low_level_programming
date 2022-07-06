#include <stdio.h>
/**
 * main -> This program prints the first98 fivonacci numbers
 * Return: Success always 0
 */
int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		if (i != 98)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}

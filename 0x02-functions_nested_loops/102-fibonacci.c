#include <stdio.h>
/**
 * main -> This program prints the first 50 fibonacci numbers
 * Return: Success always 0
 */
int main(void)
{
	int i;
	unsigned long int a, b, c;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c != 20365011074)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n", c);
		}
	}
	return (0);
}

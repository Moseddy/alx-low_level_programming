#include <stdio.h>
/**
 * main -> This program prints the fibonacci numbers divisible by 2
 * Return: Success always 0
 */
int main(void)
{
	unsigned long sum;
	unsigned long a, b, c;
	int i;

	a = 0;
	b = 1;
	sum = 0;

	for (i = 0; i <= 33; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c <= 4000000 && (c % 2) == 0)
		sum = sum + c;
	}
	printf("%lu\n", sum);
	return (0);
}

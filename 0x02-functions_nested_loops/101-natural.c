#include <stdio.h>
/**
 * main -> This function prints the multiple of 3, 5 btw 0-1024
 * Return: Success always 0
 */
int main(void)
{
	int i;
	unsigned long int sum, sum5;

	sum = 0;
	sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			sum5 += i;
		}
	}
	printf("%lu\n", sum + sum5);
	return (0);
}

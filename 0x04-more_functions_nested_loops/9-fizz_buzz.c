#include <stdio.h>

/**
 * main -> prints Fizz for numbers divisible by 3
 * Buzz for numbers divisible by 5
 * and FizzBuzz for numbers divisible by 5 and 3
 *Return: Success always zero
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}

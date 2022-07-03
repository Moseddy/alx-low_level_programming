#include <stdio.h>
/**
 * main -> This program prints numbers form 0-9
 * Return: Success always 0
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf(number);
		number++;
	}
	printf("\n");
	return (0);
}

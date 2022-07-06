#include "main.h"
/**
 * print_times_table -> This function prints the time table of any positive numver
 * @n: This is the argument passed into the function
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 || n < 16)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (j == 0)
				{
					printf("%d,   ", k);
				}
				else if (k < 10 && j != 0)
				{
					printf("%d,   ", k);
				}
				else if (k >= 10)
				{
					printf("%d,  ", k);
				}
				j++;
				printf("\n");
			}
			i++;
		}
	}
}

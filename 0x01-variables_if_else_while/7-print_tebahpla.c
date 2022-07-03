#include <stdio.h>
/**
 * main -> This program prints the alphabets in reverse order
 * Return: Success always zero
 */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

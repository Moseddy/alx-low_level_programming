#include <stdio.h>
/**
 * main -> This program print all the alphabets except q and e
 * Return: Success always 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

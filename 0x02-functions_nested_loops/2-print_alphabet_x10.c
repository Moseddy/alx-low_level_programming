#include "main.h"
/**
 * print_alphabet_x10 -> This function prints all the alphabet 10 times
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int x;
	char ch;

	x = 0;

	while (x < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		x++;
	}
	_putchar('\n');
}

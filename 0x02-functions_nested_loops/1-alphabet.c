#include "main.h"
/**
 * print_alphabet -> This program prints the alphabets a-z
 * Return: Success always 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}

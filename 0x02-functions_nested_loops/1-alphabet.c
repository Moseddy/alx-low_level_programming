#include "main.h"
/**
 * main -> This program prints the alphabets a-z using the _putchar function
 * Return: Success always 0
 */
void print_alphabet(void)
{
	int ch;

	ch = 97;

	while (ch <= 172)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}

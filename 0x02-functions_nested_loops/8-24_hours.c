#include "main.h"
/**
 * jack_bauer -> This program prints form 00:00 to 23:59
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar(a + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar(b + 48);
			_putchar((b % 10) + 48);
			b++;
		}
		a++;
	}
}

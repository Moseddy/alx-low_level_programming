#include <stdio.h>
/**
 * main -> This program prints alphabes a-z in both upper and lower cases
 * Return: Succes always 0
 */
int main(void)
{
	char chLower, chUpper;

	chLower = 'a';
	chUpper = 'A';
	while (chLower <= 'z')
	{
		putchar(chLower);
		chLower++;
	}
	while (chUpper <= 'Z')
	{
		putchar(chUpper);
		chUpper++;
	}
	putchar('\n');
	return (0);
}

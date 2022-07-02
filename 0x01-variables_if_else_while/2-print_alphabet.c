#include <stdio.h>
/**
 * main -> This program uses the putchar function to print alphabets
 * Return: Success always 0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar("\n");
return (0);
}

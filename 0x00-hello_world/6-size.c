#include <stdio.h>
/**
 * main -> This program uses the printf function to print size of types
 * Return: Success always 0
 */
int main(void)
{
int i;
long int l;
long long int ll;
float f
char c;

printf("Size of char is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int is: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of float is: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

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
float f;
double d;
char c;

printf("Size of char is: %lu byte(s)\n", sizeof(c));
printf("Size of int is: %lu byte(s)\n", sizeof(i));
printf("Size of long int is: %lu byte(s)\n", sizeof(l));
printf("Size of long long int is: %lu byte(s)\n", sizeof(ll));
printf("Size of float is: %lu byte(s)\n", sizeof(f));
printf("Size of double is: %lu byte(s)\n", sizeof(d));
return (0);
}

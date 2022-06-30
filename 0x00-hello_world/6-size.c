#include <stdio.h>
/**
 * main -> This program uses the printf function to print size of types
 * Return: Success always 0
 */
int main(void)
{
printf("Size of char is: %li byte(s)\n", sizeof(char));
printf("Size of int is: %li byte(s)\n", sizeof(int));
printf("Size of long int is: %li byte(s)\n", sizeof(long int));
printf("Size of long long int is: %li byte(s)\n", sizeof(long long int));
printf("Size of float is: %li byte(s)\n", sizeof(float));
printf("Size of double is: %li byte(s)\n", sizeof(double));
return (0);
}

#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -> This program prints a random number and uses the if statement
 * Return: Success always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
if (n > 5)
{
printf("and is greater than 5");
}
if (n == 0)
{
printf("and is 0");
}
if (n < 6 && n != 0)
{
printf("is less than 6 and not 0");
}
return (0);
}

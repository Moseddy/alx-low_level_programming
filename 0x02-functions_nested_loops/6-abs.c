#include "main.h"
/**
 * _abs -> prints the absolute number of any number entered
 * @n: The argument passed into the function
 * Return: Success the absolute value of n
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

#include "main.h"

/**
 * _isdigit -> This function returns 1 only when a digit is
 * entered
 * @c: The argument of the above function
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

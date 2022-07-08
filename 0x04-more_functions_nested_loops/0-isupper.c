#include "main.h"

/**
 * _isupper -> This function tests for uppercase letters
 * @c: The argument passed into the function
 * Return: 0 or 1
 */

_isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

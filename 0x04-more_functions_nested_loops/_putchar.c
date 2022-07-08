#include <unistd.h>

/**
 * _putchar -> prints the character 
 * @c: The argument passed into the function
 * Return: The character passed in
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

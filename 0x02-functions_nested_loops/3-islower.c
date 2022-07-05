#include "main.h"
/**
 * _islower -> This program checks if the character c is lowercase
 * @c: a character argument
 * Return: 0 or 1 depending on the value of c
 */
int _islower(int c)
	/* This program takes in c as an argument */
{
	return (c >= 'a' && c <= 'z');
}

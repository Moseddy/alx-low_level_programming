#include "main.h"
/**
 * _isalpha -> This program checks if the character c is low/uppercase
 * @c: a character argument
 * Return: 0 or 1 depending on the value of c
 */
int _isalpha(int c)
	/* This program takes in c as an argument */
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"
/**
 * swap_int -> swaps the values of integers
 * @a: ponter 1
 * @b: pointer 2
 * Retrun: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

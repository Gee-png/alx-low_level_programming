#include "main.h"
#include <stdio.h>

/**
 * swap - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


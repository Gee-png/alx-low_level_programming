#include "main.h"

/**
 * swap - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */

void swap (int *a, int *b) 
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}


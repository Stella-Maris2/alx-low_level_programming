#include "main.h"

/**
 * swap_int -> given two intergers, swap the values they are holding
 * @a: parameter 1
 * @b: parameter 2
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

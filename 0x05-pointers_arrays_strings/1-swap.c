#include "main.h"

/**
 * swap_int - Swap the value of two integer
 * @a: integer
 * @b: integer
*/

void swap_int(int *a, int *b)
{
	int myVariable;

	myVariable = *a;
	*a = *b;
	*b = myVariable;
}

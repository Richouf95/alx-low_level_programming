#include <stdio.h>
#include "main.h"

/**
 * _putchar - write charactere
 * @c: input
 * Reutrn: 1 succes -1 erro
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

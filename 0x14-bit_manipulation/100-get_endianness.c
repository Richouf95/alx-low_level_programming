#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endianCheck = (char *)&num;

	return (*endianCheck);
}

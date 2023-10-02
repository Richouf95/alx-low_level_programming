#include "main.h"
#include <unistd.h>
/**
 * _putchar - caracter c to standard output
 * @c: the caracter to print
 * Return: 1 (success)
 * Return: -1 (error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>
#include "main.h"
/*
 * _putchar - Writes a single character to the standard output (stdout).
 *
 *@c: The character to be written.
 *
 *Return: On success returns 1. On error returns -1 and set errno appropriately
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <uistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 * Return: on success 1.
 * on error, -1 is returned, error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

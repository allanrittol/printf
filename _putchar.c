#include <unistd.h>

/**
 * _putchar - wrtes a character to the standard output (stdout)
 * @c: character to be written
 * Return: 1 on success -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

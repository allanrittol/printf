#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 *
 * Return: number of characters printed(excluding the null byte
 * used to end output to strings '\0'
 */

int _printf(const char *format, ...)
{
	va_list args;
	int tally = 0;
	const char *p = format;

	va_start(args, format);

	while (*p != '\0')
	{
		if (*p  == '%')
		{
			p++;
			tally += print_format(p, args);
		}
		else
		{
			_putchar(*p);
			tally++;
			p++;
		}
	}

	va_end(args);

	return (tally);
}

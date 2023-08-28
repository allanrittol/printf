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

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format  == '%')
		{
			format++;

			print_format(format, args);
		}
		else
		{
			tally += _putchar(*format);
		}
		format++;
	}

	va_end(args);

	return (tally);
}

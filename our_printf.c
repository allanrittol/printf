#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 *
 * Return: number of characters printed(excluding the null byte
 * used to end output to strings '\0'
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == %)
		{
			format++;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				while (*s != '\0')
				{
					count += _putchar(*s);
					s++;
				}
			}
			else
			{
				count += _putchar(*format);
			}
			format++;
		}
		va_end(args);
		return (count);
	}
}


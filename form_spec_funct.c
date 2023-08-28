#include "main.h"

int print_format(const char *format, va_list args)
{
	int tally = 0;

	switch (*format)
	{
	case 'c':
		{
			int c = va_arg(args, int);

			tally += _putchar(c);
			break;
		}
	case 'd':
	case 'i':
		{
			int d = va_arg(args, int);

			tally += _putchar(d);
			break;
		}
	case 'u':
		{
			unsigned int u = va_arg(args, unsigned int);

			tally += _putchar(u);
			break;
		}
	case 'o':
		{
			unsigned int o = va_arg(args, unsigned int);

			tally += _putchar(o);
			break;
		}
	case 'x':
	case 'X':
		{
			unsigned int x = va_arg(args, unsigned int);

			tally += _putchar(x);
			break;
		}
	case 's':
		{
			char *s = va_arg(args, char *);

			while (*s != '\0')
			{
				tally += _putchar(*s);
				s++;
			}
			break;
		}
	case 'b':
		{
			unsigned int b = va_arg(args, unsigned int);
			tally += print_binary(b);
			break;
		}
	default:
		{
			tally += _putchar('%');
			break;
		}
	}
	return (tally);
}



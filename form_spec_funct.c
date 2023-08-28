#include "main.h"

int print_format(const char *format, va_list args)
{
	int tally = 0;

	switch (*format)
	{
	case 'c':
		{
			char value = va_arg(args, int);

			_putchar(value);
			tally++;
			break;
		}
	case 'd':
	case 'i':
		{
			int value = va_arg(args, int);

			tally += printf("%d", value);
			break;
		}
	case 'u':
		{
			unsigned int value = va_arg(args, unsigned int);

			tally += printf("%u", value);
			break;
		}
	case 'o':
		{
			unsigned int value = va_arg(args, unsigned int);

			tally += printf("%o", value);
			break;
		}
	case 'x':
	case 'X':
		{
			unsigned int value = va_arg(args, unsigned int);

			tally += printf(format, value);
			break;
		}
	case 's':
		{
			char *str = va_arg(args, char *);
			if (str)
			{
				tally += printf("%s", str);
			}
			else
			{
				tally += printf("(null)");
			}
			break;
		}
	case 'b':
		{
			unsigned int value = va_arg(args, unsigned int);
			tally += print_binary(value);
			break;
		}
	default:
		{
			_putchar('%');
			_putchar(*format);
			tally += 2;
			break;
		}
	}

	return (tally);
}



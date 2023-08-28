#include "main.h"
/**
 * print_binary - handles the custom conversion specifier %b
 * @num: integer
 *
 * Return: integer
 */

int print_binary(unsigned int num)
{
	int binary[32]; /* asuuming 32-bit integers*/
	int index = 0;

	while (num > 0)
	{
		binary[index] = num % 2;
		num /= 2;
		index++;
	}
	return (print_binary_digits(binary, index));
}

int print_binary_digits(int binary[], int size)
{
	int tally = 0;
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		_putchar('0' + binary[i]);
		tally++;
	}

	return (tally);
}

#include "main.h"
#include <stdio.h>

/**
 * print_int -
 *
 * @n:
 *
 * Return: doesn't return.
 */
void print_int(int n)
{
	int isPos = 1, i, digit;

	if (n < 0)
	{
		isPos = 0;
		_putchar('-');
	}

	for (i = countDigits(n) - 1; i >= 0; i--)
	{
		int d = xPowY(10, i);

		digit = (n / d) % 10;
		if (!isPos)
			digit *= -1;
		_putchar('0' + digit);
	}
}
/**
 * countDigits - returns a number's number of digits
 * @x: the number to count the digits of
 * Return: number of digits in x
 */
int countDigits(int x)
{
	if (x < 0)
	{
		if (x > -10)
			return (1);
	}
	else if (x < 10)
		return (1);

	return (1 + countDigits(x / 10));
}
/**
 * xPowY - exponent
 * @x: x
 * @y: y
 * Return: x to the power of y
 */
int xPowY(int x, int y)
{
	int i;
	int output = 1;

	for (i = 0; i < y; ++i)
		output *= x;

	return (output);
}

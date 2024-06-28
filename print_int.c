#include "main.h"

/**
 * print_int - prints an integer with an arbitrary number of digits
 *
 * @n: number to print
 *
 * Return: number of characters printed, including '-' if negative.
 */
int print_int(int n)
{
	int isPos = 1, i, printedChars = count_digits(n), digit;

	if (n < 0)
	{
		isPos = 0;
		_putchar('-');
		printedChars ++;
	}

	for (i = count_digits(n) - 1; i >= 0; i--)
	{
		int d = xPowY(10, i);

		digit = (n / d) % 10;
		if (!isPos)
			digit *= -1;
		_putchar('0' + digit);
	}

	return (printedChars);
}

/**
 * count_digits - counts a number's digits
 *
 * @n: the number to count the digits of
 *
 * Return: number of digits in n
 */
int count_digits(int n)
{
	if (n > -10 && n < 10)
		return (1);

	return (1 + count_digits(n / 10));
}

/**
 * xPowY - exponent of to the power of y
 *
 * @x: x
 * @y: y
 *
 * Return: x to the power of y
 */
int xPowY(int x, int y)
{
	int i, output = 1;

	for (i = 0; i < y; ++i)
		output *= x;

	return (output);
}

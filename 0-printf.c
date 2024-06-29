#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a string, replacing format specifiers like %s or %i
 * with the value of the arguments supplied, formatted as the type
 * specified with the format specifiers.
 *
 * @format: string to be printed, with format specifiers in place of certain
 * values, which can be useful for printing the values of variables.
 *
 * Return: length of the string printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, lastCharWasPercnt = 0;
	int charsPrinted = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		char c = format[i];

		if (lastCharWasPercnt)
		{
			_format(format, args);
			lastCharWasPercnt = 0;
		}
		else if (c == '%')
		{
			lastCharWasPercnt = !lastCharWasPercnt;
		}
		else
		{
			charsPrinted += _putchar(format[i]);
		}

	}

	va_end(args);

	return (charsPrinted);
}

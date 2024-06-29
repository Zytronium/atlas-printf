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
			/*
			 * TODO: (handling formats)
			 *  check what character this is, print next argument
			 *  in the correct format
			 *  .
			 *  if it's a valid format,
			 *  	print the next argument in args in the right format
			 *  else
			 *  	print "%" and this char.
			 */
			if (c == '%') /* %% */
				charsPrinted += _putchar(c);

			else if (c == 'i' || c == 'd') /* %i and %d */
				charsPrinted += print_int(va_arg(args, int));

			else if (c == 's') /*%c and %s*/
				charsPrinted += _puts(args); /* assuming putstr() was implemented (It's not) */
			else if (c == 'c')
				charsPrinted += _putc(va_arg(args, int));
			/*else*/
				/* TODO: handle unknown format specifier. I'll leave for Clay, since I've done a lot already. */

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

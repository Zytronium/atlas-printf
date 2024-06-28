#include "main.h"
#include <string.h>
#include <stdarg.h>

/**
 * _printf - printf TODO: write this description
 *
 * @format: string TODO: write this description
 *
 * Return: length of string printed (I think)
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

		/*
		 * if the character we're at in the loop is "%"
		 * {...}
		 * else
		 * take note that the last char was not "%"
		 */
		if (c == '%')
		{
			/*
			 * if this char and last char are "%" ("%%")
			 * print "%";
			 * else
			 * take note that this was a percent character, but don't print it
			 */
			if (lastCharWasPercnt)
			{
				charsPrinted += _putchar('%');
				lastCharWasPercnt = 0;
			}
			else
			{
				lastCharWasPercnt = 1;
			}
		}
		else if (lastCharWasPercnt)
		{
			/*
			 * TODO: (handling formats)
			 *  check what character this is, print next argument
			 *  in the correct format
			 *  .
			 *  if it's an invalid format,
			 *  	print "%" and this char.
			 *  else
			 *  	print the next argument in args in the right format
			 */
			if (c == 'i' || c == 'd') /* %i and %d */
				charsPrinted += print_int(va_arg(args, int));
			/*else if (c == 'c' || c == 's')
				charsPrinted += putstr(va_arg(args int));*/ /*assuming putstr() was implemented (It's not)*/
			/*else*/
				/*TODO: handle unknown format specifier*/

			lastCharWasPercnt = 0;
		}
		else
		{
			charsPrinted += _putchar(format[i]);
		}
	}

	va_end(args);

	return (charsPrinted);
}

#include "main.h"

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
	for (i = 0; format[i] != '\0'; i++)
	{
		char c = format[i];

		if (lastCharWasPercnt)
		{
			if (c == '%') /* %% */
				charsPrinted += _putc(c);
			else if (c == 'i' || c == 'd') /* %i and %d */
				charsPrinted += print_int(va_arg(args, int));
			else if (c == 's') /*%s*/
				charsPrinted += _puts(va_arg(args, char *));
			else if (c == 'c') /*%c*/
				charsPrinted += _putc(va_arg(args, int));
			else
			{
				charsPrinted += _putc('%');
				charsPrinted += _putc(c);
			}
			lastCharWasPercnt = 0;
		}
		else if (c == '%')
		{
			lastCharWasPercnt = 1;
			if (format[i + 1] == '\0')
				return (-1);
		}
		else
		{
			charsPrinted += _putc(format[i]);
		}
	}
	va_end(args);
	return (charsPrinted);
}

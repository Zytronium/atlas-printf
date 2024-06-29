#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * main - just a test currently
 * currently doesn't even compile
 *
 * @str: string
 *
 * Return: 0
 */
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _format(format, args);
	va_end(args);
	return (length);
}

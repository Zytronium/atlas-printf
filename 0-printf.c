#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * main - just a test currently
 * currently doesn't even compile
 * @str:
 *
 * Return: 0
 */
int _printf(char * str, ...)
{
	va_list args;

	va_start();
	printf(str, va_list);
	va_end();

	return (strlen(str));
}

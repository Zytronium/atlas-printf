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
int _printf(char * str, ...)
{
	va_list args;

	va_start(args, str);
    
	va_end(args);

	return (strlen(str));
}

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - printf
 * currently doesn't even compile
 *
 * @str: string
 *
 * Return: 0
 */
int _printf(char * str, ...)
{
	unsigned int lastCharWasPercnt = 0, i;
	va_list args;

	va_start(args, str);

	for (i = 0; i < strlen(str); i++)
	{
		/*
		 * if the character we're at in the loop is "%"
		 * {...}
		 * else
		 * take note that the last char was not "%"
		 */
		if (str[i] == '%')
		{
			/*
			 * if this char and last char are "%" ("%%")
			 * print "%";
			 * else
			 * take note that this was a percent character, but don't print it
			 */
			if (lastCharWasPercnt)
			{
				/* TODO: print "%" */
				lastCharWasPercnt = 0;
			}
			else
			{
				lastCharWasPercnt = 1;
			}
		}
		else
			if (lastCharWasPercnt)
			{
				/*
				 * TODO:
				 *  check what character this is, print next argument
				 *  in the correct format
				 *
				 *  if it's an invalid format,
				 *  	print "%" and this char.
				 *  else
				 *  	print the next argument in args in the right format
				 *
				 */

				lastCharWasPercnt = 0;
			}
	}
    
	va_end(args);

	return (strlen(str));
}

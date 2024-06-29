#include "main.h"

/**
  * _puts - Prints a string
  *
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int _puts(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			_putc(arg[i]);
			i++;
		}

		return (i);
	}

	_putc('(');
	_putc('n');
	_putc('u');
	_putc('l');
	_putc('l');
	_putc(')');
	return (6);
}
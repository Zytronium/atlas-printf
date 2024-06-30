#include "main.h"

/**
  * _puts - Prints a string
  *
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int _puts(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i])
		{
			_putc(str[i]);
			i++;
		}

		return (i);
	}

	return (_puts("(null)"));
}

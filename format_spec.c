#include "main.h"

/**
 * documentation
 *
 * Return: 1
 */
int printPerc()
{
	return (_putc('%'));
}

/**
  * _specs - Prints a valid specifier
  *
  * @format: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the specifier
  */
int _specs(char format, va_list args)
{
	int i  = 0, length = 0;
	specs_t _types[] = {
		{"c", (int (*)(va_list)) _putc},
		{"s", _puts},
		{"i", (int (*)(va_list)) print_int},
		{"d", (int (*)(va_list)) print_int},
		{"%", (int (*)(va_list)) printPerc()},
		{NULL, NULL}
	};

	while (_types[i].specifier)
	{
		if (*_types[i].specifier == format)
			length = _types[i].f(args);

		i++;
	}

	return (length);
}

/**
  * _inval_spec - Prints a invalid specifier
  *
  * @prev_format: The previous specifier of actual specifier
  * @format: The specifier to prints
  * @count: The current count before prints invalid specifiers
  *
  * Return: The current count after prints invalid specifiers
  */
int _inval_spec(char prev_format, char format, int count)
{
	count += _putc('%');

	if (prev_format == ' ')
	{
		count += _putc(' ');
		count += _putc(format);
	}
	else
	{
		count += _putc(format);
	}

	return (count);
}

/**
  * _str_char - validate the type
  *
  * @_type: character to be comparate
  *
  * Return: 1 if char is equal to a type
  */
int _val_type(char _type)
{
	char _types[] = {'c', 's', '%'};
	int i = 0;

	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}

/**
  * _print_format - Prints a format
  *
  * @format: The format to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the format
  */

int _format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += _putc(format[i]);

			if (_val_type(format[i]) == 0)
			{
				count = _inval_spec(format[i - 1], format[i], count);
			}
			else
			{
				count += _specs(format[i], args);
			}
		}
		else
		{
			count += _putc(format[i]);
		}

		i++;
	}

	return (count);
}

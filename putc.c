#include <unistd.h>

/**
 * _putc - prints a character to stdout
 * @c: The character to print
 *
 * Return: 1 if success.
 */
int _putc(char c)
{
	return (write(1, &c, 1));
}

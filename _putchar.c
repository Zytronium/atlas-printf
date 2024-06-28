#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * If we are not allowed to use this function, we'll have to delete this
 * and replace it with our own.
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../main.h"

/**
 * main - Entry point
 * Checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/*unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/
	len = _printf("Hello, World! %i is a number.\n", INT_MIN);
	len2 = printf("Hello, World! %i is a number.\n", INT_MIN);
	_putchar('\n');

	_printf("_printf len: %d\n", len);
	printf(" printf len: %d\n", len2);


	len = _printf("Hello, World! %d is a number.\n", INT_MAX);
	len2 = printf("Hello, World! %d is a number.\n", INT_MAX);
	_putchar('\n');

	printf("_printf len: %d\n", len);
	_printf(" printf len: %d\n", len2);


	len = _printf("Hello, World! %c is a character.\n", 't');
	len2 = printf("Hello, World! %c is a character.\n", 't');
	_putchar('\n');

	_printf("_printf len: %i\n", len);
	printf(" printf len: %i\n", len2);


	len = _printf("Hello, %s!\n", "Obama");
	len2 = printf("Hello, %s!\n", "Obama");
	_putchar('\n');

	printf("_printf len: %i\n", len);
	_printf(" printf len: %i\n", len2);

	len = _printf("Percent: %%.\n", 5);
	len2 = printf("Percent: %%.\n", 5);
	_putchar('\n');

	printf("_printf len: %i\n", len);
	_printf(" printf len: %i\n", len2);
	return (0);
}

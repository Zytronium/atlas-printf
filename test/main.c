#include <limits.h>
#include "../main.h"
#include "../0-printf.c"
#include "../putc.c"
#include "../puts.c"
#include "../print_int.c"

/**
 * main - Entry point
 * Checks the code
 *
 * Return: Always 0
 */
int main(void)
{
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
	int len, len2;

	len = _printf("Hello, World! %i is a number.\n", INT_MIN);
	len2 = printf("Hello, World! %i is a number.\n", INT_MIN);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("Hello, World! %d is a number.\n", INT_MAX);
	len2 = printf("Hello, World! %d is a number.\n", INT_MAX);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("Hello, World! %c is a character.\n", 't');
	len2 = printf("Hello, World! %c is a character.\n", 't');
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("Hello, %s!\n", "Obama");
	len2 = printf("Hello, %s!\n", "Obama");
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("Percent: %%.\n", 5);
	len2 = printf("Percent: %%.\n", 5);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("Unknown Specifier (%%%r): %r.\n");
	len2 = printf("Unknown Specifier (%%%r): %r.\n");
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("NULL: [ %s ].\n", NULL);
	len2 = printf("NULL: [ %s ].\n", NULL);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);

	return (0);
}





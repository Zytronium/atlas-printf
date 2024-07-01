# _printf readme

In this directory, you will find a custom function
that is supposed to work similarly to printf, but rudimentary.
Currently, this printf function only handles a few format specifiers: %%, %c, %s, %i, and %d.

Example test code for `main.c`:
```c
	int len, len2;

	/*Check %i printing the smallest possible integer*/
	len = _printf("Hello, World! %i is a number.\n", INT_MIN);
	len2 = printf("Hello, World! %i is a number.\n", INT_MIN);
	_putc('\n');
    /*
     * check return value of printf vs _printf
     * (should equal number of chars printed, or -1 on fail)
     */
	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	/*Check %d printing the largest possible integer*/
	len = _printf("Hello, World! %d is a number.\n", INT_MAX);
	len2 = printf("Hello, World! %d is a number.\n", INT_MAX);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	/*Check %c printing a character*/
	len = _printf("Hello, World! %c is a character.\n", 't');
	len2 = printf("Hello, World! %c is a character.\n", 't');
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	/*Check %s printing a string*/
	len = _printf("Hello, %s!\n", "Obama");
	len2 = printf("Hello, %s!\n", "Obama");
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');

	/*
	 * Check %% printing a % character,
	 * and checking that an unused argument has no effect
	 */
	len = _printf("Percent: %%.\n", 5);
	len2 = printf("Percent: %%.\n", 5);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');
	
	/*Check %%%r, a format specifier for % and an unknown format specifier, %r*/
	len = _printf("Unknown Specifier (%%%r): %r.\n");
	len2 = printf("Unknown Specifier (%%%r): %r.\n");
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');
	
	/*Check %s with NULL passed to it (should print "(null)")*/
	len = _printf("NULL: [ %s ].\n", NULL);
	len2 = printf("NULL: [ %s ].\n", NULL);
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);
	_putc('\n');
	_putc('\n');


	/*Check %c printing a null terminator*/
	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	_putc('\n');

	_printf("_printf len: %d\t\t", len);
	printf("printf len: %d\n", len2);

	return (0);
```
Expected correct output from `main.c`:
```
Hello, World! -2147483648 is a number.
Hello, World! -2147483648 is a number.

_printf len: 39         printf len: 39


Hello, World! 2147483647 is a number.
Hello, World! 2147483647 is a number.

_printf len: 38         printf len: 38


Hello, World! t is a character.
Hello, World! t is a character.

_printf len: 32         printf len: 32


Hello, Obama!
Hello, Obama!

_printf len: 14         printf len: 14


Percent: %.
Percent: %.

_printf len: 12         printf len: 12


Unknown Specifier (%%r): %r.
Unknown Specifier (%%r): %r.

_printf len: 29         printf len: 29


NULL: [ (null) ].
NULL: [ (null) ].

_printf len: 18         printf len: 18



_printf len: 1          printf len: 1
```

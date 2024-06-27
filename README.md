# printf readme

### Authorized functions and macros:
- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

expected correct output from `main.c`:
```
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
- We strongly encourage you to work all together on a set of tests
- If the task does not specify what to do with an edge case, do the same as printf
------
## Task 0:
- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the
null byte used to end output to strings)

- Write output to stdout, the standard output stream
- `format` is a character string. The format string is
composed of zero or more directives. See man 3 printf
for more detail. You need to handle the following
conversion specifiers:
    - `c`
    - `s`
    - `%`
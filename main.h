#ifndef main_h
#define main_h

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(void);
int _printf(const char *format, ...);
int print_int(int n);
int count_digits(int x);
int xPowY(int x, int y);
int _putc(char c);
int _puts(va_list args);

#endif
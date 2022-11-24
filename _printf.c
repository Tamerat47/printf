#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}

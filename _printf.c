#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string.
 *
 * Return: len or -1 or 0.
 **/
int _printf(const char *format, ...)
{
	int len;
	va_list args;

	if (format == '\0')
		return (-1);

	len = _strlen(format);
	if (len <= 0)
		return (0);

	va_start(args, format);
	len = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (len);
}

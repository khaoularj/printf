#include "main.h"
/**
 * _printf - a function that prints string to the output
 * @format: the output of the string
 * Return: the value of the string
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	count = vprintf(format, ap);
	va_end(ap);
	return (count);
}

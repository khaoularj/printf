#include "main.h"
/**
 * _printf - a function that prints string to the output
 * @format: the output of the string
 * Return: the value of the string
 */
int _printf(const char *format, ...)
{
	int count;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	count = vprintf(format, list);
	va_end(list);
	return (count);
}

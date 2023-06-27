#include "main.h"
/**
 * _printf - a function that prints string to the output
 * @format: the output of the string
 * Return: the value of the string
 * Explanation; the _printf funtion holds a variable number of arguments
 * first local variable(count) will hold the number of characters printed
 * second local variable(list) is used for traversing the var arguments list
 * the vprintf function prints the formatted output to standard output
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

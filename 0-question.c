#include "main.h"
/**
 * _printf - a function that prints string to the output
 * @format: the output of the string
 * Return: the value of the string
 */
int _printf(const char *format, ...)
{
	/**
	 * declaring a variable to store
	 * the variable number of arguements
	 */
	int count;
	/** the variable list */
	va_list list;

	/**
	 *  checking if no string is passed into the function
	 *   return NULL
	 */
	if (format == NULL)
		return (-1);

	/**
	 * starting the variadic function that
	 * take number of arguements
	 */
	va_start(list, format);
	/* a variable that stores the number of arguements */
	count = printf(format, list);
	/** ending the variadic function */
	va_end(list);
	/* return the value in the count variable */
	return (count);
}

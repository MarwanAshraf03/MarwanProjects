#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _printf - clone of printf function
 * @format: string to be printed
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int sum = 0;
	char *str;

	va_start(args, format);
	str = (char *)format;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			switch (*++str)
			{
			case 'c':
			_putchar(va_arg(args, int));
			break;
			case 's':
			_puts(va_arg(args, char*));
			break;
			case '%':
			_putchar('%');
			break;
			default:
			_putchar('%');
			_putchar(*str);
			}
		}
		else
			_putchar(*str);
		str++;
		sum++;
	}
	va_end(args);
	return (sum);
}


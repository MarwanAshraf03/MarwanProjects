#include "main.h"
#include <stdio.h>
#include <unistd.h>


int check_type(char c)
{
        switch(c)
        {
                case 'c': return(1);
                case 's': return(2);
                case '%': return(3);
        }
        return (c);
}                       

void main(void)
{
	char str1 = 'c';
	char str2 = 's';
	char str3 = '%';
	char str4 = 'r';
	
	printf("%d\n", check_type(str1));
	printf("%d\n", check_type(str2));	
	printf("%d\n", check_type(str3));	
	printf("%c\n", check_type(str4));	

}	


void main(void)
{
	int length = _printf("hello world");
	printf("%d\n", length);
	_printf("hello %c %s\n", 'z', "world");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}

if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);







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

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*++format)
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
			_putchar(*format);
			}
		}
		else
			_putchar(*format);
		format++;
		sum++;
	}
	va_end(args);
	return (sum);
}

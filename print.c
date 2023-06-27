#include <stdarg.h>
#include <stdio.h>

/**
 * putchar_alt - .... ....
 * @crc: character
 * Return: ... ...
 */

int putchar_alt(char crc)
{
	return (write(1, &crc, 1));
}
/**
 * _printf - produces output according to a format.
 * @format: character String
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list st;
	int counter = 0;

	va_start(st, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					counter = counter + putchar_alt(va_arg(st, int));
					break;
				case 's':
					counter = counter +  p_s(va_arg(st, char*));
					break;
				case 'i':
					counter = counter + _integer(va_arg(st, int));
					break;
				case 'd':
					counter = counter + _integer(va_arg(st, int));
					break;
				case 'b':
					counter = counter + p_bin(va_arg(st, unsigned int));
					break;
				default:
					counter = counter + putchar_alt(*format);
					break;
			}
		}
		else
		{
			counter = counter + putchar_alt(*format);
		}
		format++;
	}
	va_end(st);
	return (counter);
}

#include "main.h"

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
 * number - Converts an integer to a string
 * @n: Input Integer
 * Return: Lenght of the integer
*/

int number(int n)
{
	int length = 0;

	switch (n)
	{
		case 'INT_MIN':
			putchar_alt('-');
			putchar_alt('2');
			length = length + number(147483648);
			break;
		case '0':
			putchar_alt('0');
			length++;
			break;
		default:
			if (n < 0)
			{
				putchar_alt('-');
				n = -n;
				length += number(n);
			}
			else if (n > 9)
			{
				length += number(n / 10);
				putchar_alt(n % 10 + '0');
				length++;
			}
			else
			{
				putchar_alt(n + '0');
				length++;
			}
			break;
	}
	return (length);
}

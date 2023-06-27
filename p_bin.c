#include "main.h"

/**
 * put_bin - Prints the binary representation
 * @c: Input Unsigned Integer
 * Return: Number of digits printed
 */

int put_bin(unsigned int c)
{
	int length = 0;
	int x;
	char *s;

	x = c;
	while (x > 0)
	{
		x = x / 2;
		length++;
	}
	s = malloc((length - 1) * sizeof(char));
	if (s == NULL)
		return (-1);
	x = length - 1;
	while (x >= 0)
	{
		s[x] = (c % 2) + '0';
		c /= 2;
		x--;
	}
	s[x] = '\0';
	length = p_s(s);
	free(s);
	return (length);
}

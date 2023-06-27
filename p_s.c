#include  "main.h"

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
 * p_s - Prints string, to stdout
 * @ccr: Input String
 * Return: ... ...
 */

int p_s(char *ccr)
{
	int x = 0;
	int y = 0;
	char *s;

	while (ccr[x] != '\0')
		x++;
	s = (char *) malloc((x + 1) * sizeof(char));
	for (; ccr[y] != '\0'; y++)
		putchar_alt(ccr[y]);
	free(s);
	return (x);
}

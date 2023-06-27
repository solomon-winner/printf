#include "main.h"

/**
 * _integer - Prints an integer
 * @n: Input Integer
 * Return: Lenght of the integer
 */

int _integer(int n)
{
	int length = 0;
	char *s;

	s = (char *) malloc(BUFFER_SIZE * sizeof(char));
	if (s == NULL)
		return (-1);
	length = number(n);
	free(s);
	return (length);
}

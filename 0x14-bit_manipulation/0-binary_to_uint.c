#include "main.h"

/**
 * binary_to_uint - convert  binary number to unsigned int.
 * @b: pointer to a binary number
 *
 * Return: unsigned int with decimal value of binary num
 */
unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (r = 0; b[r] != '\0'; r++)
	{
		if (b[r] != '0' && b[r] != '1')
			return (0);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		num <<= 1;
		if (b[r] == '1')
			num += 1;
	}
	return (num);
}


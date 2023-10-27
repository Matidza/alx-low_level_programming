#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string containing the binary number
 *
 * Return: The converted decimal number, or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;  /* Stores the result */
	unsigned int power = 1;  /* Power of 2 multiplier */
	int len = 0;             /* Length of the binary string */

	if (b == NULL)
		return (0);

	/* Calculate the length of the binary string */
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	/* Convert binary to decimal */
	for (len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary mynumber to an unsigned int.
 * @b: pointer to a string containing a binary mynumber
 *
 * Return: unsigned int with decimal value of binary mynumber, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int mynum;

	mynum = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		mynum <<= 1;
		if (b[a] == '1')
			mynum += 1;
	}
	return (mynum);
}

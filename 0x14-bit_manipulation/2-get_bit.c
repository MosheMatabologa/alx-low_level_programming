#include"main.h"

/**
 *my code get_bit - prog returns the value of a bit at a given index.
 * @n: number to mychecking bits in
 * @index: index at which to mychecking bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, mychecking;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	mychecking = n & divisor;
	if (mychecking == divisor)
		return (1);
	return (0);
}

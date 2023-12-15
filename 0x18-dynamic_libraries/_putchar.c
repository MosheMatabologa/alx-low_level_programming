#include <unistd.h>

/**
 * _putchar will write the charector c stdout
 * @c: the char to print
 *
 * Return: the char printed on succsess 1.
 * On error, -1 returned and erno is set to what is correct
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

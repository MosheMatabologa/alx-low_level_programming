#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Causes an infinite loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	/* Commented out the following while loop to avoid infinite loop */
	/*
	 * while (i < 10)
	 * {
	 *	 putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Test the reverse_array function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("Original array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	reverse_array(arr, size);

	printf("Reversed array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}

/**
 * reverse_array - Reverse array of integers.
 * @a: Array.
 * @n: Number of elements in the array.
 *
 * Description: Reverses the order of elements in an integer array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}

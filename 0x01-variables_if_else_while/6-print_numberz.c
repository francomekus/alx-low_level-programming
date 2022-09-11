#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num_base;

	for (num_base = '0'; num_base <= '9'; num_base++)
		putchar(num_base);
	putchar('\n');

	return (0);
}

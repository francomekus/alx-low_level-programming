#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char low = "a";

	while (low <= "z")
	{
		putchar(low);
		putchar("\n");
		low++;
	}
	return (0);
}

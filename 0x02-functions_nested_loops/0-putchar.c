#include <unistd.h>

/**
 * _putchar - writes the charater _putchar to stdout
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

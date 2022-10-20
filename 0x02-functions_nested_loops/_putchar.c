#include "main.h"
#include<unistd.h>

/**
 * prints _putchar, followed by a new line
 * @c: the character to print
 *
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

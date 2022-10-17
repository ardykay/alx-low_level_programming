#include <stdio.h>

/**
 * main - print the alphabet both lower and upper
 * followed by a new line, except q and e
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}

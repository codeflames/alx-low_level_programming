#include "main.h"
#include <string.h>

/**
* main - Print the word "Holberton"
*
* Return: Always 0 (Success)
*/

int main(void)
{

	char const *p = "_putchar";

	char character;

	for (character = *p; character != '\0'; character = *++p)
		{
		_putchar(character);
		}
		_putchar('\n');
	return (0);
}

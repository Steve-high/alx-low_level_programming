#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in both lower
 * and uppercase
 * Return: 0
 */

int main(void)
{
	char upr;
	char lwr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
		putchar(lwr);
	for (upr = 'A'; upr <= 'z'; upr++)
		putchar(upr);
	putchar('\n');
	return (0);

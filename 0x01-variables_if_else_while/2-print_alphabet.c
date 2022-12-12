#include <stdio.h>
#include <stlib.h>

/**
 * main - prints the alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

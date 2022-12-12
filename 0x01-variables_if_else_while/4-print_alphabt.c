#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * the letter q and e
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar ('\n');
	return (0);
}

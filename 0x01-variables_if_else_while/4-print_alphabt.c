#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet without e,q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 5 && i != 17)
			putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[n];
		s[n] = rev;
	}
}

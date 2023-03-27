#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int n = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + n) != '\0')
	{
		if (size > 0 && (*(s + n) < '0' || *(s + n) > '9'))
			break;

		if (*(s + n) == '-')
			pn *= -1;

		if ((*(s + n) >= '0') && (*(s + n) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		n++;
	}

	for (i = n - size; i < n; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

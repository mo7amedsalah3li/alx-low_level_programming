#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *@c: Variable that stores the letters
 * Return: Always 0.
 */
int int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

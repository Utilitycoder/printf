#include "main.h"

/**
 * _rot13 - prints rot13 version
 * @rot: list being passed
 * Return: count of chars
 */
int _rot13(va_list rot)
{
	int a, count;
	char *s;

	a = count = 0;
	s = va_arg(rot, char *);

	if (s == NULL)
		return (-1);

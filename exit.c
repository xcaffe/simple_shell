#include "shell.h"
/**
 * _strncpy - this is to cpy string to another location
 * @dest: destination
 * @src: source
 * @n: copied words
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b;
	char *s = dest;

	while (src[a] != '\0' && a < n - 1)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
	{
		b = a;
		while (b < n)
		{
			dest[b] = '\0';
			b++;
		}
	}
	return (s);
}
/**
 **_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: words
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	char *s = dest;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
			a++;
			b++;
	}
	if (b < n)
		dest[a] = '\0';
	return (s);
}
/**
 **_strchr - character string
 *@s: string
 *@c: character
 *Return: (s)
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}

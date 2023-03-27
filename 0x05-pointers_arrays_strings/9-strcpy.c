#include "main.h"

/**
 * _strcpy - Copy what's in a variable to another
 * @dest: This is destination
 * @src: This is the copied
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

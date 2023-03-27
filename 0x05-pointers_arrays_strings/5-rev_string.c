#include "main.h"
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int i = 0, taille, k;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	taille = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[taille];
		s[taille] = c;
		i++;
		taille--;
	}
}

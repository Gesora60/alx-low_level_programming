#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;
	while (start < end)
	  {
	    tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
		start++;
		end--;
	  }
}

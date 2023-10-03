#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
  int i;
  
  i = 0;
  
  while (s[i] != '\0')
    {
      i++;
    }
  
  return (i);
}

char *_strdup(char *str)
{
  char *ptr;
  int size;
  int x;
  
  if (str == NULL)
    {
      return (NULL);
    }
  size = _strlen(str) + 1;
  ptr = malloc(size * sizeof(char));
  
  x = 0;
  while (x < size)
    {
      if (ptr == NULL)
	{
	  return (NULL);
	}
      ptr[x] = str[x];
      x++;
    }
  return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *arr;
  arr = malloc((size) * sizeof(char));
  if (size == 0)
    {
      return (NULL);
    }
  if (arr == NULL)
    {
      return (NULL);
    }
  i = 0;
  while (i < size)
    {
      arr[i] = c;
      i++;
    }
  arr[i] = '\0';

  return (arr);
}

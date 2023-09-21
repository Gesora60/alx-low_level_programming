#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  char *ptr = dest;
  while (*ptr != '\0')
    {
    ptr++;
  }
  while (*src != '\0')
    {
    *ptr = *src;
    ptr++;
    src++;
  }
  *ptr = '\0';

  return dest;
}

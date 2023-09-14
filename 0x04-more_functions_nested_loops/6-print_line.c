#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n)
{
  if (n <= 0)
    {
        putchar('\n');
    }
  else
    {
      int i;
        for (i = 0; i < n; i++)
	  {
            putchar(95);
        }
        putchar('\n');
    }
}

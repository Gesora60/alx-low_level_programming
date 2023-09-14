#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
  int y = 0;
	while (y < 10)
	{
	    int x = 0;
	for (; x <= 14; x++)
	{
	    if (x > 9)
			{
				putchar((x / 10) + '0');
			}
			putchar((x % 10) + '0');
		}	
	y++;
	putchar('\n');
	}
}

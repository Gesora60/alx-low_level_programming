#include <stdio.h>
#include "main.h"

/**
 *a function that prints the last digit of a number.
 *
 */
int print_last_digit(int n)
{
  int lastDigit = n % 10;
   _putchar('0' + lastDigit);
   return (lastDigit);
}
